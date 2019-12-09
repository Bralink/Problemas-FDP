-);
                    }
                    else
                    {
                        printf("%ix^%i + ", matriz_coef[i], i);
                    }
                }

                printf("\n\n");
                system("pause");
                }

void RESTA(){
    int i;
    int grado_prim_poli, grado_segun_poli, max_grad;
    int aux_var;
    printf("Ingrese el grado del primer polinomio: ");
                scanf("%i", &grado_prim_poli);

                printf("Ingrese el grado del segundo polinomio: ");
                scanf("%i", &grado_segun_poli);

                    if(grado_prim_poli > grado_segun_poli)
                {
                    max_grad = grado_prim_poli;
                }
                    else
                {
                    max_grad = grado_segun_poli;
                }

                    /* ---------------------------------- */
                    int matriz_coef[max_grad];
                    /* ---------------------------------- */

                    for(i = 0; i < max_grad; i++)
                    {
                        matriz_coef[i] = 0;
                    }

                printf("\n\n----------------------------\n");
                printf("PARA EL PRIMER POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_prim_poli + 1; i++)
                {
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &matriz_coef[i]);
                }

                printf("\n\n----------------------------\n");
                printf("PARA EL SEGUNDO POLINOMIO\n");
                printf("----------------------------\n");

                for(i = 0; i < grado_segun_poli + 1; i++)
                {
                    printf("Valor del coeficiente grado %i: ", i);
                    scanf("%i", &aux_var);
                        matriz_coef[i] = matriz_coef[i] - aux_var;
                }

                printf("\n\n----------------------------\n");
                printf("RESULTADOS\n");
                printf("----------------------------\n");

                for(i = max_grad; i >= 0; --i)
                {
                    if(i == 0)
                    {
                        printf("%i",  matriz_coef[i]);
                    }
                    else if(i == 1)
                    {
                         printf("%ix + ",  matriz_coef[i]);
                    }
                    else
                    {
                        printf("%ix^%i + ", matriz_coef[i], i);
                    }
                }

                printf("\n\n");
                system("pause");
                }

void MULTIPLICACION(){
    int grado_prim_poli, grado_segun_poli;
	int i=0, x=0, pos=0, ter=0, c=0;
	int grado1, grado2; 
    printf("Programa para multiplicar polinomios\n\n");
  
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
     else if (x == 1) printf(" %dx ", polinomio1[x] );
     //Y si es 0 no dibujamos la "x"
     else if (x == 0) printf(" %d ", polinomio1[x] );
     //Para que no se dibuje un + luego del último termino
     if (x != 0)
     printf(" + ");
    }
    printf(") * (");
 
    //Mostramos polinomio2
    for (x = grado_segun_poli; x >= 0; x--){
     if (x > 1)
        printf(" %dx^%d ", polinomio2[x], x );
     else if (x == 1) printf(" %dx ", polinomio2[x] );
     else if (x == 0) printf(" %d ", polinomio2[x] );
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
    printf("------------------------------------------------------------------------------\n");
    for (x = grado_prim_poli+grado_segun_poli; x >= 0; x--){
     if (x > 1)
        printf(" %dx^%d ", polinomioResultante[x], x );
     else if (x == 1) printf(" %dx ", polinomioResultante[x] );
     else if (x == 0) printf(" %d ", polinomioResultante[x] );
     if (x != 0)
     printf(" + ");
    }
}

 
void DIVISION();
void DIVISION ()
{
    int grado_prim_poli, grado_segun_poli;
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
    ("PAUSE");
 0; 
}
