/*
 
 Examen #1 - Funciones
 Alejandro ?vila
 C.I. 30.337.890

*/

#include <stdio.h>
#include <math.h>

int opc;
float a, b, c;
float radio;
float xo, vo, t, ac;

// PROTOTIPOS

void raiz(float a, float b, float c); // CASO 1
void volumen(float radio); // CASO 2
void mruv(float xo, float vo, float t, float ac); // CASO 3

int main(){
	
// OPCIONES QUE EL USUARIO PUEDE ESCOGER

	printf("Elija una opcion de calculo: \n");
	printf("1. Raices de polinomio de grado 2. \n");
	printf("2. Volumen de una esfera. \n");
	printf("3. Desplazamiento de un movil en movimiento rectil?neo uniforme variado. \n");
	scanf("%d" , &opc); // SE ALMACENA LA OPCION
	
        switch(opc)
		{
            case 1:

            printf("\nIngrese el valor de a: ");
            scanf("%f", &a);
            printf("\nIngrese el valor de b: ");
            scanf("%f", &b);
            printf("\nIngrese el valor de c: ");
            scanf("%f", &c);
            raiz(a, b, c);

            break;

            case 2:

            printf("\nIngrese el valor del radio de la esfera: \n");
			scanf("%f", &radio);
            volumen(radio);

            break;

            case 3:

            printf("Ingrese el valor del desplazamiento inicial: \n");
            scanf("%f", &xo);
            printf("Ingrese el valor de la velocidad inicial \n");
            scanf("%f", &vo);
            printf("Ingrese el valor del tiempo del desplazamiento \n");
            scanf("%f", &t);
            printf("Introduzca el valor de la aceleracion en tal intervalo \n");
            scanf("%f", &ac);
            mruv(xo, vo, t, ac);
                
            break;

			default:
				
			printf("Opcion invalida");
        }
    
    return 0;
}

void raiz(float a, float b, float c)
{
		float x, x1, x2, raiz_1;
		raiz_1=b*b-4*a*c;
		if(raiz_1==0){
		
		x=-b/(2*a);
		printf("La raiz repetida es: %d", x);
		
		}else if(raiz_1>0){
		
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		
		printf("La primera raiz es: %d", x1);
		printf("La segunda raiz es: %d", x2);		

		}else{

		printf("ERROR: raices complejas");
	}
}
void volumen(float radio)
{
		float v;
 		if(radio>0)
		{
		v = (1.333) * 3.14159 * pow(radio, 3);
		
		printf("El volumen de la esfera es: %f", v);
        } 
		else
		{
        printf("\n ERROR: el radio es menor o igual a 0 \n");
    	}
}
void mruv(float xo, float vo, float t, float ac)
{
	float x;
	
    x=xo+vo*t+(ac*pow(t,2))/2;

    printf("El desplazamiento del movil en MRUV es de %f \n", x);
}
