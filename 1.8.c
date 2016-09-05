//1.8
    //....' '....'\t'...'\n'.......EOF

#include <stdio.h>

main()
{
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
}
