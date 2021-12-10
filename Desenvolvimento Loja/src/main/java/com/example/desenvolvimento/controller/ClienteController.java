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

import com.example.desenvolvimento.model.Cliente;
import com.example.desenvolvimento.repository.ClienteRepository;

@RestController
@RequestMapping("cliente")
public class ClienteController {
	@Autowired
	private ClienteRepository clienteRepository;

	@GetMapping
	public List<Cliente> listaCliente() {
		return clienteRepository.findAll();
	}

	@PutMapping
	public ResponseEntity<String> inserirCliente(@RequestBody Cliente cliente) {
		try {
			clienteRepository.save(cliente) ;
			return ResponseEntity.status(HttpStatus.CREATED).body("Cliente inserido com sucesso!");
			
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Erro, verifique o ocorrido " + e);
		}
		
		
	}

	@DeleteMapping("/{id}")
	public ResponseEntity deleteCliente(@PathVariable Integer id) {
		var existe = clienteRepository.findById(id);
		if (existe.isPresent()) {
			clienteRepository.deleteById(id);
			return ResponseEntity.status(HttpStatus.OK).body("Excluido com sucesso");
		} else {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST)
					.body("Não foi possível excluir, verifique o que aconteceu!");
		}

	}
}
