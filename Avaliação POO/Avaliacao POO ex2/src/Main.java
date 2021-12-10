import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws FileNotFoundException {
		
		int escolha = 0;
		int flutuante = 0;
		
		Scanner ler = new Scanner(System.in);
		
		Somar soma = new Somar();	
		Media media = new Media();		
		DigitarNumero digitar = new DigitarNumero();
		Lista lista = new Lista();
		MaiorMenor comparar = new MaiorMenor();
		
		Menu menu = new Menu();
		
		System.out.println("0 - Lista com numeros inteiros");
		System.out.println("1 - Lista com numeros flutuantes");
		flutuante = ler.nextInt();
		
		if(flutuante == 0) {
			while(escolha != 6) {
				escolha = menu.digitarNumero();
				
				if (escolha == 1) {
					soma.somar();
				}else if(escolha == 2) {
					media.media();
				}else if(escolha == 3) {
					digitar.digitar();
				}else if(escolha == 4) {
					lista.lista();
				}else if(escolha == 5) {
					comparar.comparar();
				}
				
			}
		}
		
		if(flutuante == 1) {
			while(escolha != 5) {
				escolha = menu.digitarNumero();
				
				if (escolha == 1) {
					soma.somar_flutuante();
				}else if(escolha == 2) {
					media.media_flutuante();
				}else if(escolha == 3) {
					digitar.digitar_flutuante();
				}else if(escolha == 4) {
					lista.lista_flutuante();
				}else if(escolha == 5) {
					comparar.comparar_flutuante();
				}
			
			}
		}
		
	}

}
