	#include <stdio.h>
	
	int main() {
		
	    int a, b, c;
	
	    printf("Digite o primeiro valor: ");
	    scanf("%d", &a);
	    
	    printf("Digite o segundo valor: ");
	    scanf("%d", &b);
	    
	    printf("Digite o terceiro valor: ");
	    scanf("%d", &c);
	
	    if(a + b > c && a + c > b && b + c > a){
	        printf("Os 3 lados formam um triangulo ");
	        
	        if(a == b && a == c)
	            printf("equilatero");
	            
	        else
	            if(a == b || a == c || b == c)
	                printf("isosceles");
	            else
	                printf("escaleno");
	    }
	    
	    else
	        printf("Os 3 lados NAO formam um triangulo.");
	        
	return(0);}
