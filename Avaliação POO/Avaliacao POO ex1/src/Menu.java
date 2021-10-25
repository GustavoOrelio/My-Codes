import java.util.Scanner;

public class Menu {
	
	public int digitarNumero() {
		
		Scanner ler = new Scanner(System.in);
		
		System.out.println("*****************");
		
		System.out.println("Escolha uma das opções:");
		
		System.out.println("1 - Somar todos os numeros da lista.");
		
		System.out.println("2 - Calcular a média dos numeros da lista.");
		
		System.out.println("3 - Verificar se o numero está na lista.");
		
		System.out.println("4 - Imprimir todos os numeros da lista.");
		
		System.out.println("5 - Finalizar.");
		
		System.out.println("");
		
		System.out.println("Opção escolhida: ");
		int nova = ler.nextInt();
		
		return(nova);
	}
	
}
