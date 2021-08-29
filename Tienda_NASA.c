#include <stdio.h>
#include <conio.h>

#define A1 150.00
#define A2 100.00
#define A3  50.00

int main(){
    int v1,v2,v3;
    float tot;
     printf("Introdusca el numero de ventas del v1: ");
	 scanf("%i",&v1);
     printf("Introdusca el numero de ventas del v2: ");
	 scanf("%i",&v2);
     printf("Introdusca el numero de ventas del v3: ");
	 scanf("%i",&v3);


     tot= (A1*v1)+(A2*v2)+(A3*v3);
	 printf("Su venta total semanal de los 3 vendedores es de: $ %.2f",tot);
	 getch();
	 return 0;
}
