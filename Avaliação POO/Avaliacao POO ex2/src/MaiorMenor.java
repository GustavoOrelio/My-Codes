import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

import javax.swing.filechooser.FileSystemView;

public class MaiorMenor {
    
    public void comparar() throws FileNotFoundException{
        
         File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
         
         int inteiro = 0;
         int maior = 0;
         int menor = 0;
         
         Scanner ler = new Scanner(text);
         
         int lineNumber = 1;
            while(ler.hasNextLine()){
                String line = ler.nextLine();
                inteiro = Integer.parseInt(line);
                if(inteiro < menor) {
                	menor = inteiro;
                }
                if(inteiro > maior) {
                	maior = inteiro;
                }
                lineNumber++;
            }
            
           
            
            System.out.println("O maior é: " + maior);
            System.out.println("O menor é: " + menor);
         
        
    }
    
    public void comparar_flutuante() throws FileNotFoundException{
        
        File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
        
        float flutuante = 0;
        float maior = 0;
        float menor = 0;
        
        Scanner ler = new Scanner(text);
        
        int lineNumber = 1;
           while(ler.hasNextLine()){
               String line = ler.nextLine();
               flutuante = Float.parseFloat(line);
               if(flutuante < menor) {
               	menor = flutuante;
               }
               if(flutuante > maior) {
               	maior = flutuante;
               }
               lineNumber++; 
           }
           
          
           
           System.out.println("O maior é: " + maior);
           System.out.println("O menor é: " + menor);
        
       
   }
     

}