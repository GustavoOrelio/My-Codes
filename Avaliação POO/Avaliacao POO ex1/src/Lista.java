import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

import javax.swing.filechooser.FileSystemView;

public class Lista {
    
    public void lista() throws FileNotFoundException{
        
         File text = new File("C:/Users/oreli/Eclipse-workspace/Avaliacao POO/src/Numero.txt");
         
         Scanner ler = new Scanner(text);
         
         int lineNumber = 1;
            while(ler.hasNextLine()){
                String line = ler.nextLine();
                System.out.println("Linha " + lineNumber + ": " + line);
                lineNumber++;
            }
            
            System.out.println("");
         
        
    }
     

}