#include <stdio.h>


 int main()
{
    int sayi1,sayi2;
    printf("1.sayiyi giriniz\n");
    scanf("%d",&sayi1 );
    printf("2.sayiyi giriniz\n");
    
    
    
    scanf("%d",&sayi2);
    
    bolum(sayi1,sayi2);
    
    
    return 0;
}

void bolme(int x, int y){
   if(y==0)
   {
       printf("sonuc tanimsizdir");
       
   }
   else
   {
   float sonuc=x/y;
   
   printf("sonuc %f\n",sonuc);
   }
   
   
   
   
   

