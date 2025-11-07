#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    if (n < 1) return 0;
    int * cont = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; ++i) scanf("%d", &cont[i]); 

    int start = 0;

    while (start < n) 
    {
        int min = start;
        for (int i = min; i < n; ++i) 
        {
            if (cont[i] <= cont[min]) min = i; 
        }

        for (int i = start; i < min; ++i) 
        {
            cont[i] = cont[min];
        }

        start = min+1;
    }

    int s = 0;

    for (int i = 0; i < n; ++i) 
    {
        s += cont[i];
    }
    printf("%d", s);
    free(cont);
    return 0;
}