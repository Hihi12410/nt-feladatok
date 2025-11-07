#include <stdio.h>

int main() 
{
    int tabla[3*3] = {};
    int k;
    scanf("%d", &k);
    int p = 0;
    
    for (int i = 0; i < k; ++i) 
    {
        p = (++p) % 2;
        int x, y;
        scanf("%d %d", &x, &y);
        tabla[(y-1)*3+(x-1)] = p+1;
    }
    for (int i = 0; i < 3; ++i) 
    {
        printf("+-+-+-+\n");
        for (int j = 0; j < 3; ++j) 
        {
            switch (tabla[i*3+j]) 
            {
                case 2 :
                    printf("|O");
                    break;
                case 1 : 
                    printf("|X");
                    break;
                default : 
                    printf("| ");
                    break;
            }
        }
        printf("|\n"); 
    }
    printf("+-+-+-+\n");
    return 0;
}