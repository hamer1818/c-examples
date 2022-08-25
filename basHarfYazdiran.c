#include <stdio.h>
int main(){
    char dizi[100],bas[50];
    printf("cumle gir: ");
    gets(dizi);
    bas[0]=dizi[0];
    int k=1;
    int i,boslukSayac=0;
    for (i = 0 ; dizi[i] != '\0'; i++)
    {
        
        if (dizi[i]==' ' && dizi[i]!='\0'&&dizi[i+1]!='\0')
        {
            bas[k]=dizi[i+1];
            k++;
        }
        if (dizi[i]==' ')
        {
            boslukSayac++;
        }
        
        
    }
    printf("\nbas harfleri: ");
    for (i = 0; i <=boslukSayac ; i++)
    {
        printf("%c",bas[i]);
    }
    
    
    system("\npause");
    return 0;

}