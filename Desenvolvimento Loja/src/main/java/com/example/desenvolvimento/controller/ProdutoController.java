package com.example.desenvolvimento.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.example.desenvolvimento.model.Produto;
import com.example.desenvolvimento.repository.ProdutoRepository;

@RestController
@RequestMapping("produto")
public class ProdutoController {
	@Autowired
	private ProdutoRepository produtoRepository;

	@GetMapping
	public List<Produto> listaProduto() {
		return produtoRepository.findAll();
	}

	@PutMapping
	public ResponseEntity<String> inserirProduto(@RequestBody Produto produto) {
		try {
			produtoRepository.save(produto) ;
			return ResponseEntity.status(HttpStatus.CREATED).body("Produto inserido com sucesso!");
			
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Erro, verifique o ocorrido " + e);
		}
		
		
	}

	@DeleteMapping("/{id}")
	public ResponseEntity deleteProduto(@PathVariable Integer id) {
		var existe = produtoRepository.findById(id);
		if (existe.isPresent()) {
			produtoRepository.deleteById(id);
			return ResponseEntity.status(HttpStatus.OK).body("Excluido com sucesso");
		} else {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST)
					.body("Não foi possível excluir, verifique o que aconteceu!");
		}

	}
}
