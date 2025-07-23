#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
   char s[100];
int   sum=0;
   int n,i,j;
   scanf("%s",&s);
   for(i=0;s[i]!='0';i++)
   {

       if(isdigit(s[i]))
       {

        n=s[i]-'0';
        //0 bcs ascii will be stored in order to convert to normal number we use
        for(j=i+1;s[j]!='\0';j++)
        {


        if(isdigit(s[j]))
            n=n*10+s[j]-'0';

else{
    i=j;
    break;
}
      }
sum=sum+n;

   }}
   printf("%d",sum);
   return 0;
}
