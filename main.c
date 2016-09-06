#include <stdio.h>

main()
{
    /*
    int a = 123;
    printf("%d %d", sizeof(a), sizeof(123L));
    */
    char str[33];
    str[0] = 'h';
    str[1] = 'O';
    str[2] = 'L';
    str[3] = 'A';
    str[4] = '\0';

    printf("%d\n", strlen(str));
    printf("%c\n", str[1] );
    //printf("%s\n", squeeze(str,'O'));
    printf("%s\n", strcat(str,", PC"));

    int i;
    int numeros[10];
    for( i=1;i<=10;++i)
        numeros[i] = i;
    for( i=1;i<=10;++i)
        printf("%d ", numeros[i]);

    printf(" Pos %d: %d",7 , busqueda_binaria(7, numeros, 10));

}

int busqueda_binaria(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int strlen(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int lower(int c)
{
    if (c >= 'A' && c <='Z')
        return c + 'a' - 'A';
    else
        return c;
}

int squeeze (char s[], int c)
{
    int i,j;
    for (i = j = 0; s[i] != '\0';i++)
        if(s[i] != c)
            s [j++] = s[i];
    s[j] = '\0';
}

void strcat(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}






























