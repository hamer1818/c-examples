#include <stdio.h>
int main(){
    char dizi[256];
    printf("cumle girin\n");
    gets(dizi);
    int sayac=0,rakam=0;
    for (int i = 0; dizi[i] != '\0'; i++)
    {
        if (dizi[i]=='0'||dizi[i]=='1'||dizi[i]=='2'||dizi[i]=='3'||dizi[i]=='4'||dizi[i]=='5'||dizi[i]=='6'||dizi[i]=='7'||dizi[i]=='8'||dizi[i]=='9')
        {
            sayac++;
        }
            
        
        
    }
    printf("\ndizi de su kadar rakam var: %d\n",sayac);
    
    
    system("\npause");
    return 0;
}