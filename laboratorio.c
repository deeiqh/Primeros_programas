#include <stdio.h>
#include <math.h>

void convertir(char*);
int strindex(char [], char);
float numero(char*);

int main()
{
    // Convertir mayusc a minusc
    char c = 'W';
    convertir(&c);
    //strindex
    char cad[100] = "Ciencia de la computacioon";
    printf("%d\n", strindex(cad,'o'));
    //numero
     printf("%f\n", numero("123.56e-6"));
    //string invertido
    char cadena[5];
    cad[0]='h';
    cad[1]='o';
    cad[2]='l';
    cad[3]='a';
    cad[4]='\0';
    invierte(cadena,0,3);
    printf("%s",cadena );

    return 0;
}

void convertir(char *caracter)
{
    printf("%c\n",*caracter += ('a' - 'A'));
}

int strindex(char *str, char c){
    int a = str;
    int posible_posicion = -1;
    while (*str != '\0'){
        if (*str != c)
            str++;
        else
            posible_posicion = str;
            str++;
    }
    int res = posible_posicion - a;
    if ( res < 0)
        return -1;
    else
        return res;
}

float convierte(char* ptr_i, char *ptr_f)
{
    float num =0;
    int div = 0;
    int flag = 0;
    char *ptr = ptr_i;
    while (ptr_i != ptr_f){
        if(*ptr != '.'){
            num = (num*10) + *ptr;
            if (flag == 1)
                div++;
            ptr++;
        }
        else
            flag = 1;
            ptr++;
    int i;
    for (i=1; i<=div;i++)
        num = num/10;
    return num;
    }
}

float numero(char*cadena)
{
    char *ini_base;
    char *fin_base;
    ini_base = cadena;
    while (*cadena != 'e')
        fin_base = cadena;
        cadena++;
    int signo;
    signo = (*cadena == '-');
    cadena++;
    char *ini_exp;
    char *fin_exp;
    ini_exp = cadena;
    while (*cadena != '\0')
        fin_exp = cadena;
        cadena++;
    float base = convierte(ini_base, fin_base);
    float exp = convierte(ini_exp, fin_exp);

    return pow(base,exp);
}

void invierte(char *str,int ini, int fin){
    if (*str != '\0'){
        char temp=*str;
        *str = *(str+fin-ini);
        *(str+fin-ini) = temp;
        invierte(str, ini+1,fin-1);
    }
}










