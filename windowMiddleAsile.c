#include<stdio.h>
int main()
 {
   int i,b,j=-1;
   char a[6]={'W','M','A','A','M','W'};
   printf("Enter the seat number whose position you want to check:- ");
   scanf("%d",&b);
   for(i=1;i<=b;i++)
    {
     if(j==5)
     {
       j=-1;
     }
     j=j+1;
   }
   if(a[j]=='W')
   {
    printf("\n%d is a Window seat.",b);
   }
   else if(a[j]=='M')
   {
    printf("\n%d is a Middle seat.",b);
   }
   else
   {
    printf("\n%d is a Aisle seat.",b);
   }
   return 0;
 }
