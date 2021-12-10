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

import com.example.desenvolvimento.model.Venda;
import com.example.desenvolvimento.repository.VendaRepository;

@RestController
@RequestMapping("venda")
public class VendaController {
	@Autowired
	private VendaRepository vendaRepository;

	@GetMapping
	public List<Venda> listaVenda() {
		return vendaRepository.findAll();
	}

	@PutMapping
	public ResponseEntity<String> inserirVenda(@RequestBody Venda venda) {
		try {
			vendaRepository.save(venda) ;
			return ResponseEntity.status(HttpStatus.CREATED).body("Venda inserida com sucesso!");
			
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Erro, verifique o ocorrido " + e);
		}
		
	
	}

	@DeleteMapping("/{id}")
	public ResponseEntity deleteVenda(@PathVariable Integer id) {
		var existe = vendaRepository.findById(id);
		if (existe.isPresent()) {
			vendaRepository.deleteById(id);
			return ResponseEntity.status(HttpStatus.OK).body("Excluida com sucesso");
		} else {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST)
					.body("Não foi possível excluir, verifique o que aconteceu!");
		}

	}
}
