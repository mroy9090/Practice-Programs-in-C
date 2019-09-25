#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int account,balance;
    char name[30];
    FILE *pt2;
    if((pt2=fopen("text.txt","r"))==NULL)
    {
        printf("FILE DOESN'T EXIST");
    }
    else
        {
            printf("ACCOUNT NAME  BALANCE");
            fscanf(pt2,"%d%s%d",&account,name,&balance);
            while(!feof(pt2))
                {
                  printf("ACCOUNT NAME  BALANCE");
            fscanf(pt2,"%d%s%d",&account,name,&balance);
                }
        }
        fclose(pt2);

}
