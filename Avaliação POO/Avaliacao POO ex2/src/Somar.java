import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

public class Somar {
    
    public void somar() throws FileNotFoundException{
        
         File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
         
         int soma = 0;
         int inteiro = 0;
         
         Scanner ler = new Scanner(text);
         
         int lineNumber = 1;
            while(ler.hasNextLine()){
                String line = ler.nextLine();
                inteiro = Integer.parseInt(line);
                soma = soma + inteiro;
                lineNumber++;
            }
            System.out.println("A soma de todos os numeros é: " + soma);
         
        
    }
     
    public void somar_flutuante() throws FileNotFoundException{
        
        File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
        
        float soma = 0;
        float flutuante = 0;
        
        Scanner ler = new Scanner(text);
        
        int lineNumber = 1;
           while(ler.hasNextLine()){
               String line = ler.nextLine();
               flutuante = Float.parseFloat(line);
               soma = soma + flutuante;
               lineNumber++;
           }
           System.out.println("A soma de todos os numeros é: " + soma);
        
       
    }


    }



