package lista;

import java.util.Scanner;

public class Media {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Informe um n�mero: ");
		int n1 = sc.nextInt();
		System.out.println("Informe o segundo n�mero: ");
		int n2 = sc.nextInt();
		System.out.println("Informe o 3 n�mero: ");
		int n3 = sc.nextInt();
		
		int soma= (n1 + n2+ n3) / 3;
		System.out.println("M�dia: " + soma);

	}

}
