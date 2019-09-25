#include<stdio.h>
#include<stdlib.h>
int main()
{
    int account;
    char name[30];
    double balance;
    FILE *pt1;
    pt1=fopen("text.txt","w");
    if(pt1==NULL)
    {
        printf("FILE DOESN'T EXIST\n");
    }
    else
    {
        printf("ENTER ACCOUNT,NAME AND BALANCE:\n");
        printf("?\n");
        scanf("%d%s%lf",&account,name,&balance);

        while(!feof(stdin))
        {
            fprintf(pt1,"Account   Name   Balance\n");
            fprintf(pt1,"%d   %s   %lf\n",account,name,balance);
            printf("Again?");
            scanf("%d%s%lf",&account,name,&balance);
        }
    }
    fclose(pt1);

}
