#include "stdio.h"
#include "stdlib.h"

int numerodelados(char f[]){
	if (strcmp(f, "circulo")==0){
		return 0;
	}
	else if(strcmp(f, "cuadrado")==0){
		return 4;
	}
	else if(strcmp(f, "triangulo")==0){
		return 3;
	}
	
}

int main()
{
	
	int c;
	char figura[20];

	inicio:
	
	printf("Ingrese el nombre de la figura\n");
	scanf("%s", figura);
   
    c = numerodelados(figura);
    
    printf("%d\n", c);

    goto inicio;
}




