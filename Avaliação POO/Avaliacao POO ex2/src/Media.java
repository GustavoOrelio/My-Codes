import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

import javax.swing.filechooser.FileSystemView;

public class Media {
    
    public void media() throws FileNotFoundException{
        
         File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
         
         int soma = 0;
         float media = 0;
         int inteiro = 0;
         
         Scanner ler = new Scanner(text);
         
         int lineNumber = 1;
            while(ler.hasNextLine()){
                String line = ler.nextLine();
                inteiro = Integer.parseInt(line);
                soma = soma + inteiro;
                lineNumber++;
            }
            
            media = soma / (lineNumber-1);
            
            System.out.println("A média é: " + media);
         
        
    }
    
    public void media_flutuante() throws FileNotFoundException{
        
        File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
        
        float soma = 0;
        float media = 0;
        float flutuante = 0;
        
        Scanner ler = new Scanner(text);
        
        int lineNumber = 1;
           while(ler.hasNextLine()){
               String line = ler.nextLine();
               flutuante = Float.parseFloat(line);
               soma = soma + flutuante;
               lineNumber++;
           }
           
           media = soma / (lineNumber-1);
           
           System.out.println("A média é: " + media);
        
       
   }
     

}