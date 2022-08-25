#include <stdio.h>
int main(){
	
char dizi[50];
int sayac=0;
int i=0;
printf("bir cumle giriniz:");
gets(dizi);

while(dizi[i]!='\0'){
	if(dizi[i]=='a'){
		dizi[i]='A';
		sayac++;
	}
	i++;
}

printf("Dizinin yeni hali:%s\n",dizi);
puts(dizi);
printf("%d karakter degistirilmistir.",sayac);
system("pause");
return 0;
}

