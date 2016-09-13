#include <stdio.h>
#include <math.h>

void convertir(char*);
int strindex(char [], char);
double numero(char*);
double convierte(char* , char *);
void invierte(char*, int, int);

int main()
{
    // Convertir mayusc a minusc
    char c = 'W';
    convertir(&c);
    //strindex
    char cad[100] = "Ciencia de la computacioon";
    printf("%d\n", strindex(cad,'o'));
    //numero
    printf("%lf\n", numero("123.56e-6"));
    //string invertido
    char cadena[] = "holla";
    invierte(cadena,0,4);
    printf("%s\n", cadena);

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

double convierte(char* ptr_i, char *ptr_f)
{
    double num = 0;
    int div = 0;
    int flag = 0;
    while (ptr_i <= ptr_f){
        if(*ptr_i != '.'){
            num = (num*10) + (*ptr_i)-'0';
            if (flag == 1)
                div++;
            ptr_i++;
        }
        else{
            flag = 1;
            ptr_i++;
        }
    }
    int i;
    for (i=1; i<=div;i++)
        num = num/10;
    return num;
}

double numero(char*cadena)
{
    char *ini_base;
    char *fin_base;
    ini_base = cadena;
    while (*cadena != 'e'){
        fin_base = cadena;
        cadena++;
    }
    int signo;
    cadena++;
    signo = (*cadena == '-');
    cadena++;
    char *ini_exp;
    char *fin_exp;
    ini_exp = cadena;
    while (*cadena != '\0'){
        fin_exp = cadena;
        cadena++;
    }
    double base = convierte(ini_base, fin_base);
    double exp = convierte(ini_exp, fin_exp);
    
    if (signo == 1){
        exp = pow(10, -exp);
        return base * exp;
    }
    else{
        exp = pow(10, exp);
        return base * exp;
    }
}

void invierte(char *str,int ini, int fin){
    if (fin > 0){
        char temp = *str;
        *str = *(str + fin - ini);
        *(str + fin - ini) = temp;
        invierte(str + 1, ini, fin-2);
    }
}

