import java.util.Scanner;

public class Menu {
	
	public int digitarNumero() {
		
		Scanner ler = new Scanner(System.in);
		
		System.out.println("*****************");
		
		System.out.println("Escolha uma das op��es:");
		
		System.out.println("1 - Somar todos os numeros da lista.");
		
		System.out.println("2 - Calcular a m�dia dos numeros da lista.");
		
		System.out.println("3 - Verificar se o numero est� na lista.");
		
		System.out.println("4 - Imprimir todos os numeros da lista.");
		
		System.out.println("5 - Finalizar.");
		
		System.out.println("");
		
		System.out.println("Op��o escolhida: ");
		int nova = ler.nextInt();
		
		return(nova);
	}
	
}
