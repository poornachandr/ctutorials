#include<stdio.h>
int main()
{
 int a,b,i;
 printf("/n Enter the first interval");
 scanf("%d",&a);
 printf("/n Enter the second interval");
 scanf("%d",&b);
 for(i=a;i<=b;i++)
  {
   if(i%2!=0)
   {
    printf("the number is %d",i);
   }
  }
  return 0;
 } 
