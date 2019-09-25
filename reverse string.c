#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("THE NUMBER:%d",count);
}
