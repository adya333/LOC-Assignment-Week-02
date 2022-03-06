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
    str=strcat(str1,str2);
   
   puts(str);

  return 0;
}