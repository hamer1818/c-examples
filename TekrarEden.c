#include <stdio.h>

int main(){
    int A[14]={1,5,6,4,4,8,8,8,9,1,6,7,8,1};
    int sayac1=0,sayac4=0,sayac5=0,sayac6=0,sayac7=0,sayac8=0,sayac9=0,i,k;
    for (i = 0; i < 14; i++)
    {
        
        if (1==A[i])
        {
            sayac1++;
        }
        if (5==A[i])
        {
            sayac5++;
        }
        if (4==A[i])
        {
            sayac4++;
        }
        if (6==A[i])
        {
            sayac6++;
        }
        if (7==A[i])
        {
            sayac7++;
        }
        if (8==A[i])
        {
            sayac8++;
        }
        if (9==A[i])
        {
            sayac9++;
        }    
    }
    if (sayac1>sayac4&&sayac1>sayac5&&sayac1>sayac6&&sayac1>sayac7&&sayac1>sayac8&&sayac1>sayac9)
    {
        printf("en cok tekrar eden sayi: 1\nTekrar sayisi: %d\n",sayac1);
    }else if (sayac1<sayac4&&sayac4>sayac5&&sayac4>sayac6&&sayac4>sayac7&&sayac4>sayac8&&sayac4>sayac9)
    {
        printf("en cok tekrar eden sayi: 4\nTekrar sayisi: %d\n",sayac4);
    }else if (sayac1<sayac5&&sayac4<sayac5&&sayac5>sayac6&&sayac5>sayac7&&sayac5>sayac8&&sayac5>sayac9)
    {
        printf("en cok tekrar eden sayi: 5\nTekrar sayisi: %d\n",sayac5);
    }else if (sayac1<sayac6&&sayac4<sayac6&&sayac5<sayac6&&sayac6>sayac7&&sayac6>sayac8&&sayac6>sayac9)
    {
        printf("en cok tekrar eden sayi: 6\nTekrar sayisi: %d\n",sayac6);
    }else if (sayac1<sayac7&&sayac4<sayac7&&sayac5<sayac7&&sayac6<sayac7&&sayac7>sayac8&&sayac7>sayac9)
    {
        printf("en cok tekrar eden sayi: 7\nTekrar sayisi: %d\n",sayac7);
    }else if (sayac1<sayac8&&sayac4<sayac8&&sayac5<sayac8&&sayac6<sayac8&&sayac7<sayac8&&sayac8>sayac9)
    {
        printf("en cok tekrar eden sayi: 8\nTekrar sayisi: %d\n",sayac8);
    }else
    {
        printf("en cok tekrar eden sayi: 9\nTekrar sayisi: %d\n",sayac9);
    }

    system("pause");
}