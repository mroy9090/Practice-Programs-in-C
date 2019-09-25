#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char r;
    int sum=0;
    while(r!='X')
    {
    scanf("%c",&r);
    }
    if(r=='L')
    {
       sum=sum+10;
    }
    printf("THE SUM:%d",sum);
}
