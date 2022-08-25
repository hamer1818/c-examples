#include <stdio.h>
int main(){
    int a[14]={1,5,6,4,4,8,8,8,9,1,6,7,8,1};
    int sayi=0,i,geciciTekrar=1,tekrarSayisi=0;
    for (i=0;i<a[14];i++){
        if (a[i]==a[i+1])
        {
            geciciTekrar++;
        }
        if (i==a[13]||a[i]!=a[i+1])
        {
            if (geciciTekrar>tekrarSayisi)
            {
                tekrarSayisi=geciciTekrar;
                sayi=a[i];
            }
            geciciTekrar=1;
            
        }
        
    }
    printf("'%d' Sayisi En Cok Tekrarlanmistir.\nBu Tekrarlanan sai %d kez tekrarlanmistir",sayi,tekrarSayisi);
    printf("\n%d\n",a[13]);
    system("pause");
}