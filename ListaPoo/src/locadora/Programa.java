package locadora;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Programa {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		List<Filme> filmes = new ArrayList<Filme>();

		System.out.println("Inserir filmes digite (i) ");
		String adicionarFilme = sc.next();
		if (adicionarFilme.charAt(0) == 'i') {
			System.out.println("Nome: ");
			String nome = sc.next();
			System.out.println("Código: ");
			int id = sc.nextInt();

			filmes.add(new Filme(nome, id));

			for (int i = 0; i < filmes.size(); i++) {
				System.out.println("LISTA DE FILMES");
				System.out.println("#Nome: " + filmes.get(i).getNome() + " #Código: " + filmes.get(i).getId());
				System.out.println("");
			}

			System.out.println("Próximo passo? excluir(D) Inserir(P)");
			String escolha = sc.next();
			if (escolha.charAt(0) == 'd') {
				System.out.println("Digite o nome do filme: ");
				String name = sc.next();
				for (int i = 0; i < filmes.size(); i++) {
					if (filmes.get(i).getNome().equals(name)) {
						filmes.remove(i);
						System.out.println("Removido com sucesso!");
					} else {

						System.out.println("Erro, não verifique os dados");
					}
				}
			} else {
				id = 0;
				nome = "";
				System.out.println("Nome: ");
				nome = sc.next();
				System.out.println("Código: ");
				id = sc.nextInt();
				filmes.add(new Filme(nome, id));
				for (int i = 0; i < filmes.size(); i++) {
					System.out.println("#Nome: " + filmes.get(i).getNome() + " #Código: " + filmes.get(i).getId());
				}
			}

		} else {
			System.out.println("Informe outra opção");
		}

	}

}
