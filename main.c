#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sn[100];
    printf("enter your name");
    scanf("%[^\n]s",&sn);//for space aslo like abs bce dec
    printf("address is = %s",sn);
    return 0;
}
