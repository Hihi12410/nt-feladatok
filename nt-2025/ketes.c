#include <stdio.h>
#include <stdlib.h>

void szamolas(int * a, int * g, char c) 
{
    
    return;
}

int main() 
{
    int n;
    scanf("%d", &n);
    char * in = (char *)malloc(sizeof(char) * (n+1));
    scanf("%s", in);

    for (int i = 0; i < n; ++i)
    {
        int a = 0; int g = 0;

        for (int j = 0; j <= i; ++j) 
        {
            if (i == j) 
            {
                switch (in[j])
                {
                    case 'A':
                        a += 1;
                        break;
                    case 'G' : 
                        g += 1;
                    case 'D' :
                        break;
                }
            }
            else if (in[j] == 'G') g++;
        }

        printf("%d - %d\n", g, a);
    }

    free(in);
    return 0;
}