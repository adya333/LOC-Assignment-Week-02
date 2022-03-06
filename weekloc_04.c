#include<stdio.h>
int main()
{  int n;
   printf("enter the number:\n");
   scanf("%d",&n);int sum;
   int a=0;int b=1;
   for(int i=1;i<=n;i++)
   {  sum=a+b;
      a=b;
      b=sum;
      printf("%d ",sum);

   }
    return 0;
}