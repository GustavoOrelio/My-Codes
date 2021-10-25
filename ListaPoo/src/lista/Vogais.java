package lista;

import java.util.Scanner;

public class Vogais {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int quantidade = 0;
		System.out.println("Digite uma palavra ou frase: ");
		String frase = sc.next();

		for (int i = 0; i < frase.length(); i++) {
			char vogais = frase.charAt(i);
			if (vogais == 'a' || vogais == 'e' || vogais == 'i' || vogais == 'o' || vogais == 'u' ||
					vogais == 'A' || vogais == 'E' || vogais == 'I' || vogais == 'O' || vogais == 'U') {
				quantidade++;
			}
		}
		System.out.println("quantidade de vogais: " + quantidade);
	}

}
