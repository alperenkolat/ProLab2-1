#include <stdio.h>

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
    
}