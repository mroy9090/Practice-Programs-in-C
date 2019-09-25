#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,temp1,temp2,temp3;
    float temp4;

    printf("enter first number:\n");
    scanf("%d",&x1);
    printf("enter second number:\n");
    scanf("%d",&y1);
    printf("enter third number:\n");
    scanf("%d",&x2);
    printf("enter forth number:\n");
    scanf("%d",&y2);
    temp1=(x2-x1);
    temp2=(y2-y1);
    temp3=(pow(temp1,2)+pow(temp2,2));
    temp4=sqrt(temp3);
    printf("THE NUMBER IS:%f\n",temp4);
    if(temp4==10)
    {
        printf("NEAR");

    }
    else
    {
        printf("FAR");
    }
}
