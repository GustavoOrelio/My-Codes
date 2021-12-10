package com.example.desenvolvimento.model;

import java.util.Objects;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;

@Entity
public class Venda {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name="id")
	private Integer id;
	

	
	@ManyToOne
    @JoinColumn(name="id_cliente")
	private Cliente cliente;
	
	@ManyToOne
    @JoinColumn(name="id_produto")
	private Produto produto;
	
	@Column(name="quantidade_saida")
	private Integer quantidade_saida;
	
	@Column(name="valor_total")
	private Double valor_total;

	public Integer getId() {
		return id;
	}

	public void setId(Integer id) {
		this.id = id;
	}

	public Integer getQuantidadeSaida() {
		return quantidade_saida;
	}

	public void setQuantidadeSaida(Integer quantidade_saida) {
		this.quantidade_saida = quantidade_saida;
	}

	public Double getValorTotal() {
		return valor_total;
	}

	public void setValorTotal(Double valor_total) {
		this.valor_total = valor_total;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public Produto getProduto() {
		return produto;
	}

	public void setProduto(Produto produto) {
		this.produto = produto;
	}

	@Override
	public int hashCode() {
		return Objects.hash(cliente, id, produto, quantidade_saida, valor_total);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Venda other = (Venda) obj;
		return Objects.equals(cliente, other.cliente) && Objects.equals(id, other.id)
				&& Objects.equals(produto, other.produto) && Objects.equals(quantidade_saida, other.quantidade_saida)
				&& Objects.equals(valor_total, other.valor_total);
	}
	
	

}
