#include<stdio.h>

void asal(int sayi)
{
    int i;
    for (i=2;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            printf("Asal degil.");
            break;
        }
        else
        {
            if (sayi==i+1)
                printf("asal");
            else
                continue;
        }
    }

}

int main()
{
    asal(87);
    return 0;
}
