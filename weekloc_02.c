#include<stdio.h>
int main()
{  
   printf("enter the number:\n");
   int arr[10];int odd;int even;
   for (int i=0;i<10;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<10;i++)
   {
      if(arr[i]%2==0)
      {
          even=even+arr[i];
      }
      else{
          odd=odd+arr[i];
      }
   }
   printf("even sum:%d\n",even);
   printf("odd sum:%d\n",odd);
    return 0;
}