#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (!n && m) 
    {
        printf("NEM\n");
        return 0;

    }
    if (!m) 
    {
        printf("IGEN\n");
        return 0;
    }

    char * gy = (char *)calloc(m, sizeof(char));
    if (!gy) return -1;

    for (int i = 0; i < n; ++i) 
    {   
        int x;
        scanf("%d", &x);
        for (int j = 0; j < x; ++j) 
        {
            int a;
            scanf("%d", &a);
            if (!a) continue; 
            gy[a-1] = (char)1;
        }  
    } 

    int f = 1;
    for (int i = 0; i < n; ++i) 
    {
        if (!gy[i]) 
        {
            f = 0;
            break;
        }
    }

    if (f) printf("IGEN\n");
    else printf("NEM\n");
    free(gy);
    return 0; 
}