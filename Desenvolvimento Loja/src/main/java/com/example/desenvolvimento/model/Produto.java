package com.example.desenvolvimento.model;

import java.util.Objects;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Produto {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name="id")
	private Integer id;
	@Column(name="nome")
	private String nome;
	@Column(name="preco")
	private Double preco;
	@Column(name="quantidade_estoque")
	private Integer quantidade_estoque;
	
	public Integer getId() {
		return id;
	}
	public void setId(Integer id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Double getPreco() {
		return preco;
	}
	public void setPreco(Double preco) {
		this.preco = preco;
	}
	public Integer getQuantidadeEstoque() {
		return quantidade_estoque;
	}
	public void setQuantidadeEstoque(Integer quantidade_estoque) {
		this.quantidade_estoque = quantidade_estoque;
	}
	@Override
	public int hashCode() {
		return Objects.hash(id, nome, preco, quantidade_estoque);
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Produto other = (Produto) obj;
		return Objects.equals(id, other.id) && Objects.equals(nome, other.nome) && Objects.equals(preco, other.preco)
				&& Objects.equals(quantidade_estoque, other.quantidade_estoque);
	}
	
	

}
