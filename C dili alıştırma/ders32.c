/*
#include <conio.h>
#include <math.h>
char turan(char a){
 
scanf("%c",&a);
 
return a;
}
 
int main(){
int b,c,d,e;
char a;
char i;
i=turan(a);
printf("iki sayi giriniz\n");
scanf("%d",&b);
scanf("%d",&c);
 
if(i=='+'){
 
d=b+c;
 
printf("%d",d);
 
}
 
else if(i=='-'){ d=b-c;
 
printf("%d",d);
 
}
 
else if(i=='*'){ d=b*c;
 
printf("%d",d);
 
}
else if(i=='/'){ d=b/c;
 
printf("%d",d);
 
} 
getch ();
 
return 0;
 
} */

/*
#include<stdio.h>//K�t�phanelerimizi ekledik.
#include<conio.h>
#include<stdlib.h>
void f(int n,int *p,int *g)//Yard�mc� bir void fonksiyonumuz.Bu fonksiyonumuzda matematiksel hesaplamalar yap�l�yor.
{ int i;

for(i=0;i<n;i++)//Siz while d�ng�s�ne de alabilirsiniz ama for d�ng�s� daha k�sa ve basit olur.
{ printf("\n a[%d] : ",i);
scanf("%d",p+i);}

for(i=0;i<n;i++)
{ if( *p <= *(p+i) )
{ *g= i;
*p = *(p+i);
}
}

return;
}
int main()//Ana fonksiyonumuz.
{ int n,*p,r;
printf("\n Dizi kac elemanli olsun? : ");//Ekran ��kt�s�.
scanf("%d",&n);
p = (int*)malloc(n*sizeof(int));//Burada malloc kodu kullan�larak de�erler printer sayesinde yard�mc� fonksiyonumuza ula��yor.
if( p == NULL )exit(1);//E�er ifade bo� olursa ��k�� yap�l�yor.
f(n,p,&r);

printf("\n %d indisli eleman : %d maximumdur . ",r,*p);//Ekran ��kt�m�z� al�r�z.
getch();
return 0; //Ana fonksiyonumuzun sonuna geliriz.
} */

#include <iostream.h>//K�t�phanelerimizi yaz�yoruz.
#include <conio.h>

main(){//Ana fonksiyonumuz.
srand(time(NULL));
int sayi=rand()%100;//Burada yukar�da da yazd���m�z gibi program 1 ile 100 aras�nda rastgele bir say� belirliyor.
int istek;

while(sayi){
printf("Uretilen sayiyi tahmin et");
scanf("%d",&istek);//D��ar�dan tahmin etti�iniz say�y� giriyorsunuz.

if(sayi<istek){//Burada if else komutlar�na giriyoruz sonu�ta tahmin etti�iniz say� do�ru olmazsa yukar� yada a�a�� diye program uyar� veriyor ona g�re tekrardan say� giri�i yap�yorsunuz ta ki do�ru say�y� bulana kadar.
printf("asagi\n");
}else if(sayi>istek){
printf("yukari\n");

}else{
printf("Bildiniz %d",sayi);//Say�y� bildi�inizde bu ��kt�y� verecektir.
break;
}
}
getch();
return 0; //Program bitirme kodlar�.
}
