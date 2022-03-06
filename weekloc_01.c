#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter the first string:");
    gets(str1);
    printf("/n enter the seocond string:");
    gets(str2);
    char str[100];
    strcat(str1,str2);
    int l=strlen(str1);
   for(int i=l-1;i>=0;i--)
   {   char ch=str1[i];
       strncat(str,&ch,1);
   }
   puts(str);
   /*for(int i=l-1;i<=0)

  return 0;*/
}
