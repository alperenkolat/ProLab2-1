#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "code_check.h"


int toplam(int dizi[], int n)
{
    int x = 0;
    for(int i=0; i < n; i++)
    {
        x = x + dizi[i];
    }
    return x;
}

int main(void)
{
    int dizi[5] = {1,2,3,4,5};
    int boyut = sizeof(dizi);
    toplam(dizi,boyut);
    
    move_and_compile();
}