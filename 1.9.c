//1.9
// ....'     '.....' '...EOF to ....' '....' '...EOF

#include <stdio.h>

main()
{
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
}
