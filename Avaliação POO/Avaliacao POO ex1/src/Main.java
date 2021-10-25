import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws FileNotFoundException {
		
		int escolha = 0;
		
		Somar soma = new Somar();	
		Media media = new Media();		
		DigitarNumero digitar = new DigitarNumero();
		Lista lista = new Lista();
		
		Menu menu = new Menu();
		
		
		while(escolha != 5) {
			escolha = menu.digitarNumero();
			
			if (escolha == 1) {
				soma.somar();
			}else if(escolha == 2) {
				media.media();
			}else if(escolha == 3) {
				digitar.digitar();
			}else if(escolha == 4) {
				lista.lista();
			}
		
		}
		
	}

}
