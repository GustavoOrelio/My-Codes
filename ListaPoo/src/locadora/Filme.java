package locadora;

import java.util.ArrayList;
import java.util.List;

public class Filme {

	public String nome;
	public Integer id;
	//public boolean status;
	
	public void Filme() {
		
	}

	public Filme(String nome, Integer id) {
		this.nome = nome;
		this.id = id;
		//this.status = status;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Integer getId() {
		return id;
	}

	public void setId(Integer id) {
		this.id = id;
	}

	//public boolean isStatus() {
		//return status;
	//}

	//public void setStatus(boolean status) {
	//	this.status = status;
	//}
	
	
}
