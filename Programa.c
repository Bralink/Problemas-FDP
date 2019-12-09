#include <stdio.h>
#include <stdlib.h>
//PROTOTIPO DE LAS FUNCIONES
	void MENU();
	void SUMA();
	void RESTA();
	void MULTIPLICACION();
	void SALIR();
        void DIVISION();
//-------------------------------------------
int cent, op; 
//MAIN PRINCIPAL DEL PROGRAMA

int main(){
    MENU();
    system("PAUSE");
    return 0;
}

//DEFINICION DE FUNCIONES
		//FUNCION MENU
		void MENU(){			//ELABORADO: GIOVANNI CHAVES FLORES	Y DIEGO SANTIAGO GUTIERREZ	INICIO: 25/11/2019-FINAL: 8/12/2019 		TIEMPO: 11:00-11:30 (a estas horas era posible trabajar)
	     	 do{
	      		printf("\n--------------------MENU DE OPCIONES-------------------------\n");
	            printf("Bienvenido al menu de operaciones de polinomios, elige una opcion\n");
				printf("\t(1) Agregar polinomio.\n");
				printf("\t(2) Sumar polinomios.\n");
				printf("\t(3) Restar polinomios.\n");
				printf("\t(4) Multiplicar polinomios.\n");
				printf("\t(5) Dividir polinomio entre monomio.\n");
				printf("\t(6) Dividir polinomio entre binomio.\n");
				printf("\t(7) Cargar polinomios.\n");
				printf("\t(8) Guardar polinomios.\n");
				printf("\t(9) Salir\n");
	            printf("------------------------------------------------------------\n");
				
				printf("\n\nOpcion: ");
	            scanf("%d",&op);
	
	            switch(op)
				{
	               case 1:
	                  	printf("------------------------------------------------------------\n");
		  				printf("Agregar polinomio.");   
						printf("\n------------------------------------------------------------\n");   
						system("pause");
	               break;
	               case 2:
	                    printf("------------------------------------------------------------\n");
		  				printf("Sumar polinomios.");   
						printf("\n------------------------------------------------------------\n");   
						SUMA();
						system("pause");
						system("cls");
	               break;
	               case 3:
	                  	printf("------------------------------------------------------------\n");
		  				printf("Restar polinomios.");   
						printf("\n------------------------------------------------------------\n");  
						RESTA();
						system("pause");
						system("cls");
					break; 
	                case 4:
	                  	printf("------------------------------------------------------------\n");
		  				printf(" Multiplicar polinomios.");   
						printf("\n------------------------------------------------------------\n");
						MULTIPLICACION();
						system("pause");
						system("cls");
					break;
	                case 5:
	                  	printf("------------------------------------------------------------\n");
		  				printf("Dividir polinomio entre monomio.");   
						printf("\n------------------------------------------------------------\n");   
				                DIVISION ();
						system("pause");
					break;
					case 6:
	                  	printf("------------------------------------------------------------\n");
		  				printf("Dividir polinomio entre binomio.");   
						printf("\n------------------------------------------------------------\n");   
						 system("pause");
					break;
					case 7:
	                  	printf("------------------------------------------------------------\n");
		  				printf(" Cargar polinomios.");   
						printf("\n------------------------------------------------------------\n");   
					 	system("pause");
					break;
					case 8:
	                  	printf("------------------------------------------------------------\n");
		  				printf("Guardar polinomios.");   
						printf("\n------------------------------------------------------------\n");   
	                	system("pause");
					break;
					case 9:
	    	            SALIR();
						system("pause");
		            break;   
	                default:
	                  printf("\n OPCIÓN INEXISTENTE, INTRODUCE UNA OPCION VALIDA\n");
	                break;
	            }
	        }
	 			while(op!=9);
		}
		//FUNCION SUMA	
		void SUMA(){   			 //ELABORADO: GIOVANNI CHAVES FLORES		INICIO: 28/11/2019-FINAL: 30/11/2019 		TIEMPO: 10:00-11.00 (a estas horas era posible trabajar)
	    int i, aux_var;
	    int grado_prim_poli, grado_segun_poli, max_grad;
	  
			    printf("Ingrese el grado del primer polinomio: ");
			    scanf("%i", &grado_prim_poli);
	
	            printf("Ingrese el grado del segundo polinomio: ");
	            scanf("%i", &grado_segun_poli);

                    if(grado_prim_poli > grado_segun_poli) {
						max_grad = grado_prim_poli; 
					}
                    else{
						max_grad = grado_segun_poli;
					}

                    /* ---------------------------------- */
                    int matriz_coef[max_grad];
                    /* ---------------------------------- */

                    for(i = 0; i < max_grad; i++){
                        matriz_coef[i] = 0;
                    }

                printf("\n\n----------------------------\n");
                printf("PARA EL PRIMER POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_prim_poli + 1; i++){
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &matriz_coef[i]);
                }

                printf("\n\n----------------------------\n");
                printf("PARA EL SEGUNDO POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_segun_poli + 1; i++){
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &aux_var);
                    matriz_coef[i] = matriz_coef[i] + aux_var;
                }

                printf("\n\n----------------------------\n");
                printf("RESULTADOS\n");
                printf("----------------------------\n");

                for(i = max_grad; i >= 0; --i){
                    if(i == 0){
                        printf("%i",  matriz_coef[i]);
                    }
                    else if(i == 1){
                         printf("%ix + ",  matriz_coef[i]);
                    }
                    else{
                        printf("%ix^%i + ", matriz_coef[i], i);
                    }
                }

                printf("\n\n");
                system("pause");
        }
		//FUNCION RESTA
		void RESTA(){ 			 //ELABORADO: GIOVANNI CHAVES FLORES		INICIO: 29/11/2019-FINAL: 1/12/2019 		TIEMPO: 10:00-11.00 (a estas horas era posible trabajar)
			    int i, aux_var;
			    int grado_prim_poli, grado_segun_poli, max_grad;
		
			    printf("Ingrese el grado del primer polinomio: ");
			    scanf("%i", &grado_prim_poli);

                printf("Ingrese el grado del segundo polinomio: ");
                scanf("%i", &grado_segun_poli);

                if(grado_prim_poli > grado_segun_poli){
                	max_grad = grado_prim_poli;
                }
                else{
                    max_grad = grado_segun_poli;
                }

                    /* ---------------------------------- */
                    int matriz_coef[max_grad];
                    /* ---------------------------------- */

                for(i = 0; i < max_grad; i++){
                    matriz_coef[i] = 0;
                }

                printf("\n\n----------------------------\n");
                printf("PARA EL PRIMER POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_prim_poli + 1; i++){
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &matriz_coef[i]);
                }

                printf("\n\n----------------------------\n");
                printf("PARA EL SEGUNDO POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_segun_poli + 1; i++){
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &aux_var);
                    matriz_coef[i] = matriz_coef[i] - aux_var;
                }

                printf("\n\n----------------------------\n");
                printf("RESULTADOS\n");
                printf("----------------------------\n");

                for(i = max_grad; i >= 0; --i){
                	if(i == 0){
                        printf("%i",  matriz_coef[i]);
                    }
                    else if(i == 1){
                         printf("%ix + ",  matriz_coef[i]);
                    }
                    else{
                        printf("%ix^%i + ", matriz_coef[i], i);
                    }
                }

                printf("\n\n");
                system("pause");
        }
		//FUNCION MULTIPLICACION
		void MULTIPLICACION(){	//ELABORADO: DIEGO SANTIAGO GUTIERREZ		INICIO: 26/11/2019-FINAL: 2/12/2019 		TIEMPO: 8:00-10.00 (a estas horas era posible trabajar)
		    int grado_prim_poli, grado_segun_poli;
			int i=0, x=0, pos=0, ter=0, c=0;
			int grado1, grado2; 
		  
		    //Ingresamos los grados de los 2 polinomios
		    printf("\n------------------------------------------------------------------------------\n");
		    printf("Ingrese el grado del primer polinomio: ");
		    scanf("%i", &grado_prim_poli);
		
		    printf("Ingrese el grado del segundo polinomio: ");
		    scanf("%i", &grado_segun_poli);
		     printf("------------------------------------------------------------------------------\n");
		    
			//Creamos los polinomios de grado + 1
		    int polinomio1[grado_prim_poli + 1];
			int polinomio2[grado_segun_poli + 1];
		 		 
		    	//Polinomio 1	
		     for( i = 0; i < grado_prim_poli + 1; i++) {
		        printf("Valor del coeficiente grado %i para el primer polinomio: ", i);
		        scanf("%i", &polinomio1[i]);
		    }
		     printf("---------------\n");
		    	//Polinomio 2 
		  	 for(i = 0; i < grado_segun_poli + 1; i++) {
		        printf("Valor del coeficiente grado %i para el segundo. polinomio: ", i);
		        scanf("%i", &polinomio2[i]);
		    }
		    printf("---------------\n");
		
		    //Mostramos polinomio1:
		    printf("(");
		    for (x = grado_prim_poli; x >= 0; x--){
		     //Dibujamos los x^2 o mayor
		     	if (x > 1)
		   			printf(" %dx^%d ", polinomio1[x], x );
		     //Si es 1 dibujamos solamente "x"
		     	else if (x == 1) 
			 		printf(" %dx ", polinomio1[x] );
		     //Y si es 0 no dibujamos la "x"
		     	else if (x == 0) 
				 		printf(" %d ", polinomio1[x] );
		     //Para que no se dibuje un + luego del último termino
		     	if (x != 0)
		     		printf(" + ");
		     }
		     printf(") * (");
		 
		    //Mostramos polinomio2
		    for (x = grado_segun_poli; x >= 0; x--){
		    	if (x > 1)
		        	printf(" %dx^%d ", polinomio2[x], x );
		     	else if (x == 1) 
				 	printf(" %dx ", polinomio2[x] );
		     	else if (x == 0) 
				 	printf(" %d ", polinomio2[x] );
		     	if (x != 0)
		     		printf(" + ");
		    }
		    printf(")");
		 
		    //Termino mayor del polinomio Resultante es  x^(grado1+grado2)
		    int polinomioResultante [grado_prim_poli + grado_segun_poli + 1];
		 
		    //Iniciamos como 0 los valores del polinomio resultante
		    for (c = 0; c < grado_prim_poli + grado_segun_poli + 1; c++)
		        polinomioResultante[c] = 0;
		 
		    //Por cada termino del polinomio1
		    for (pos = 0; pos < grado_prim_poli + 1; pos++)
		    //Vamos a multiplicar cada termino del polinomio2
		        for (ter = 0; ter < grado_segun_poli + 1; ter++){
		            //pos + ter = x ^ (pos + ter)
		            polinomioResultante[pos + ter] += polinomio1[pos] * polinomio2[ter];
		        }
		 
		 
		    //Mostramos el Polinomio Resultante:
		    printf("\n\nPolinomio Resultante: \n\n");
		    printf("\n------------------------------------------------------------------------------\n");
		    for (x = grado_prim_poli+grado_segun_poli; x >= 0; x--){
		     	if (x > 1)
		        	printf(" %dx^%d ", polinomioResultante[x], x );
		     	else if (x == 1) 	
					printf(" %dx ", polinomioResultante[x] );
		    	else if (x == 0) 
					printf(" %d ", polinomioResultante[x] );
		     	if (x != 0)
		     		printf(" + ");
		    }
		}


                //FUNCIÓN DIVIDIR 


void DIVISION ()
{
    int grado_prim_poli, grado_segun_poli;
	int i=0, x=0, pos=0, ter=0, c=0;
	int grado1, grado2; 
	int a;
    printf("Programa para dividir un polinomio entre un monomio\n\n");
  
    //Ingresamos los grados de los 2 polinomios
     printf("\n------------------------------------------------------------------------------\n");
    printf("Ingrese el grado del primer polinomio: ");
    scanf("%i", &grado_prim_poli);

    printf("Ingrese el grado del monomio: ");
    scanf("%i", &grado_segun_poli);
     printf("------------------------------------------------------------------------------\n");
    
	//Creamos los polinomios de grado + 1
    float polinomio1[grado_prim_poli + 1];
	float polinomio2;
 		 
    	//Polinomio 1	
     for( i = 0; i < grado_prim_poli + 1; i++) {
        printf("Valor del coeficiente grado %i para el primer polinomio: ", i);
        scanf("%f", &polinomio1[i]);
    }
     printf("---------------\n");
    	//Polinomio 2 
  	 
        printf("Valor del coeficiente grado %i para el monomio: ", grado_segun_poli);
        scanf("%f", &polinomio2);
    
    printf("---------------\n");

 
    //Mostramos polinomio1:
    printf("(");
    for (x = grado_prim_poli; x >= 0; x--){
     //Dibujamos los x^2 o mayor
     if (x > 1)
        printf(" %dx^%d ", polinomio1[x], x );
     //Si es 1 dibujamos solamente "x"
     else if (x == 1) printf(" %dx ", polinomio1[x] );
     //Y si es 0 no dibujamos la "x"
     else if (x == 0) printf(" %d ", polinomio1[x] );
     //Para que no se dibuje un + luego del último termino
     if (x != 0)
     printf(" + ");
    }
    printf(") / (");
 
    //Mostramos polinomio2
    
        printf(" %dx^%d ", polinomio2, grado_segun_poli );
     
    
    printf(")");
 
    //Termino mayor del polinomio Resultante es  x^(grado1+grado2)
    a=fabs(grado_prim_poli - grado_segun_poli);
    float polinomioResultante [a];
 
    //Iniciamos como 0 los valores del polinomio resultante
    for (c = 0; c < grado_prim_poli + 1; c++)
        polinomioResultante[c] = 0;
 
    //Por cada termino del polinomio1
    for (pos = 0; pos < grado_prim_poli + 1; pos++)
    //Vamos a multiplicar cada termino del polinomio2
    
            //pos + ter = x ^ (pos + ter)
            polinomioResultante[pos - ter] = polinomio1[pos] / polinomio2;
        
 
 
    //Mostramos el Polinomio Resultante:
    printf("\n\nPolinomio Resultante: \n\n");
    printf("------------------------------------------------------------------------------\n");
    for (x = grado_prim_poli; x >= 0; x--){
     
        printf(" %dx^%d ", polinomioResultante[x], x - grado_segun_poli );
    
     if (x != 0)
     printf(" + ");
    }
 
    return 0;
}	
//FUNCIÓN SALIR



		void SALIR(){
    	printf("------------------------------------------------------------\n");
		printf("LA EJECUCION HA LLEGADO A SU FINAL\n");   
		printf("------------------------------------------------------------\n");  }#include <stdio.h>
}
