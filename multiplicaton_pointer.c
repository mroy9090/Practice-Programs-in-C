#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,mul;
    printf("ENTER TWO NUMBERS:");
    scanf("%d%d",&num1,&num2);
    mul=multiplication(num1,num2);
    printf("THE RESULT IS:%d",mul);
}
void multiplication(int num1,int num2)
{
    int *p,*q,temp;
    p=&num1;
    q=&num2;
    temp=*p * *q;
}
