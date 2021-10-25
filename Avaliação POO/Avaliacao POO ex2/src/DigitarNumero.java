import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class DigitarNumero {
    
    public void digitar() throws FileNotFoundException{
        

    	 File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
         Scanner ler = new Scanner(text);
         Scanner scan = new Scanner(System.in);
         
         System.out.println("Informe um n�mero: ");
         int numero = scan.nextInt();
          
         int lineNumber = 1;
            while(ler.hasNextLine()){
                String line = ler.nextLine();
                int inteiro = Integer.parseInt(line);
                if(inteiro == numero) {
                    System.out.println("O N�mero foi encontrado na linha " + lineNumber);
                }
                lineNumber++;
            }               
            System.out.println("");
    }
    
    public void digitar_flutuante() throws FileNotFoundException{
        

   	 File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
        Scanner ler = new Scanner(text);
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe um n�mero: ");
        float numero = scan.nextInt();
         
        int lineNumber = 1;
           while(ler.hasNextLine()){
               String line = ler.nextLine();
               float flutuante = Float.parseFloat(line);
               if(flutuante == numero) {
                   System.out.println("O N�mero foi encontrado na linha " + lineNumber);
               }
               lineNumber++;
           }               
           System.out.println("");
   }
    
}