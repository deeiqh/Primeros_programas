#include <stdio.h>
#define CANT_CARACTERES 128

main()
{
    int c;
    float frecuencias[CANT_CARACTERES];

    for (int i=0; i<CANT_CARACTERES; ++i)
        frecuencias[i] = 0.0;

    long total_caracteres = 0;
    while((c = getchar()) != EOF ){
        ++frecuencias[c];
        ++total_caracteres;
    }

    for (int i=0; i<CANT_CARACTERES; ++i){
        frecuencias[i] = frecuencias[i]*100/total_caracteres;
    }

    int barras;
    for (int i=0; i<CANT_CARACTERES; ++i)
        if (frecuencias[i] > 0){
            if (c == '\n')
                printf("\\n");
            else if (c =='\t')
                printf("\\t");
            else if (c ==' ')
                printf("( )  ");
            else
                printf("%c\t",i);

            barras = frecuencias[i]/5;
            for (int j=0; j < barras; ++j)
                printf("--");
            printf("\t%.2f ",frecuencias[i]);
            printf("\n");
        }

}
