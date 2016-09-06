/*
#include <stdio.h>

#define INICIO 300
#define FIN 0
#define PASO -20

main()
{
    int inicio, fin, paso;
    float far, cels;

    inicio = 0;
    fin = 200;
    paso = 10;

    far = inicio;
    while (far <= fin) {
        cels = (5.0/9) * (far-32);
        printf("%10.0f\t%10.2f\n", far, cels);
        far = far + paso;
    }
    */
    /*
    int far;
    for (far = INICIO; far <= FIN; far = far + PASO)
        printf("%3d\t%7.2f\n", far, (5.0/9.0)*(far-32));
    */
    /*
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        printf(" %c %d\n",c,c);
        c = getchar();
    }
    */
    /*
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);

    printf("%c %d",EOF,EOF);
    */
    /*
    long n;
    n = 0;
    while( getchar() != EOF ){
        n = n+1;
    }
    printf("%ld",n);
    for (n=0; getchar()!= EOF; n++)
        ;
    printf("%ld",n);
    */
    /*
    int c;
    long nl;
    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%ld\n",nl);
    */
    //1.8
    //....' '....'\t'...'\n'.......EOF
    /*
    long nb, nt, nl;
    nb = 0;
    nt = 0;
    nl =0;
    int c;
    while( (c = getchar()) != EOF){
        if ( c == ' ' )
            ++nb;
        else if ( c == '\t')
            ++nt;
        else if ( c == '\n')
            ++nl;
    }
    printf("%ld %ld %ld\n", nb, nt, nl);
    */
    //1.9
    // ....'     '.....' '...EOF to ....' '....' '...EOF
    /*
    int c;
    char flag;
    flag = 0;
    while ( (c=getchar()) != EOF ){
        if (flag == 0)
            printf("%c",c);
        if (c == ' ')
            flag = 1;
        else
            if (flag == 1){
                printf("%c",c);
                flag = 0;
            }

    }
    */
    //1.10
    //printf("1234\b5sdf\b\b\b\n");
    /*
    int c;
    while ((c = getchar()) != EOF)
  "      if (c == '\t')
            printf("\\t");
        else
            if (c == '\b')
            printf("\\b");
        else
            if (c == '\\')
            printf("\\");
        else
            printf("%c",c);
    */
    /*
    //CONTAR PALABRAS
    int c;
    long np, nl, nb, nt;
    char flag;
    flag = 0;
    np = nl = nt = 0;
    while ((c = getchar()) != EOF )
        if ((c != '\n') && (c != '\t') && (c != ' ') && (flag == 0)){
            flag = 1;
            ++np;
        }
        else{
            if (c == ' '){
                ++nb;
                flag = 0;
            }
            else
                if (c == '\n'){
                    ++nl;
                    flag = 0;
                }
                else
                    if (c == '\t'){
                        ++nt;
                        flag = 0;
                    }
        }
    printf("%d %d %d", np, nl, nt);
}
*/
    //ARRAYS
    // 1.13
/*
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
*/

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

    //ordeno las frecuencias en dos arreglos, uno con las frecuencias y otro con su valor correlativo de caracter

     int aux, i, j;

             for (i = 0; i < CANT_CARACTERES-1 ; i++) {
                     for (j = i + 1; j < CANT_CARACTERES ; j++) {
                             if (frecuencias[i] < frecuencias[j]) {
                                    aux = frecuencias[i];
                                    frecuencias[i] = frecuencias[j];
                                    frecuencias[j] = aux;
                             }
                    }
             }

}




























