#include <stdio.h>

#define INICIO 300
#define FIN 0
#define PASO -20

main()
{
    int far;
    for (far = INICIO; far >= FIN; far = far + PASO)
        printf("%3d\t%7.2f\n", far, (5.0/9.0)*(far-32));
}

