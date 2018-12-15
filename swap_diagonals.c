#include<stdio.h>
int main()
 {
  int r,c,i,j;
  printf("Enter the number of rows:- ");
  scanf("%d",&r);
  printf("Enter the number of cols:- ");
  scanf("%d",&c);
  int a[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<r;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<r;j++)
    {
     printf("%d ",a[i][j]);
    }
   printf("\n");
  }

 }
