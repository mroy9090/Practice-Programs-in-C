#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[5]={5,4,3,2,1},i,c;
    bubble_sort(&x);
    for(c=0;c<5;c++)
    {
        printf("THE RESULT IS:%d\n",x[c]);
    }
}
void bubble_sort(int *num)
{
    int c,r,temp1;
    for(c=1;c<5;c++)
    {
        for(r=0;r<5-1;r++)
        {
            if(num[r]>num[r+1])
            {
                temp1=num[r];
                num[r]=num[r+1];
                num[r+1]=temp1;
            }
        }
    }
}
