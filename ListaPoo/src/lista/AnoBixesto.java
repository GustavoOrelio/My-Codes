package lista;

import java.util.Scanner;

public class AnoBixesto {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o ano: ");
		int ano = sc.nextInt();
		
		if(ano %4 == 0 && ano%100 != 0) {
			System.out.println("Ano bixesto " + ano);
		}
		else if(ano %4 == 0 && ano%400 == 0 && ano%100 == 0) {
			System.out.println("Ano bixesto " + ano);
		}
		else {
			System.out.println("Não é bixesto " + ano);
		}

	}

}
