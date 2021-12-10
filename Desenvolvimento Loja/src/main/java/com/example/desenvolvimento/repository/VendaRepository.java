package com.example.desenvolvimento.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.example.desenvolvimento.model.Venda;

@Repository
public interface VendaRepository extends JpaRepository<Venda, Integer> {
	
	

}
