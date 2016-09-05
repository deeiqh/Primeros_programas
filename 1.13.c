// 1.13

#include <stdio.h>
#define CANT_PALABRAS 15

main()
{
    int c;
    char flag;
    char num_letras;
    char palabras[CANT_PALABRAS];

    for (int i=0;i<CANT_PALABRAS;++i)
        palabras[i] = 0;

    char mayor_longitud = 0;
    flag = 0;
    num_letras = 0;
    int i = 0;
    while ((c = getchar()) != EOF)
        if ((c != '\n') && (c != '\t') && (c != ' ')){
            flag = 1;
            ++num_letras;
        }
        else{
            if (flag == 1){
                    palabras[i] = num_letras;
                    if (num_letras > mayor_longitud)
                        mayor_longitud = num_letras;
                    ++i;
                    flag = 0;
                    num_letras = 0;
            }
        }
    int cantidad_palabras = i;

    int k;
    for (k = mayor_longitud; k>0; --k){
        //recorro el arreglo buscando los que tengan la mayor longitud
        for(int j=0; j<cantidad_palabras; ++j){
            if (palabras[j] != k)
                printf("\t ");
            else
                printf("\t|");
        }
        printf("\n");
    }

    for (int i=0; i<cantidad_palabras; i++)
        printf("\t%d", i);

}
