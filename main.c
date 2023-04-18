#include <stdio.h>
#include <stdlib.h>

int main()
{
    float empage,empid,sal,netsal,netsala;
    char empname[40];
    int n,i=0;

    printf("enter the number of time execution:");
    scanf("%d",&n);

    do
    {

    i++;
    printf("Enter the  salary:",sal);
    scanf("%f",&sal);
    printf("Enter the emp name:",empname);
    scanf("%s",&empname);
    printf("Enter the emp age:",empage);
    scanf("%f",&empage);
    printf("Enter the emp id:",empid);
    scanf("%f",&empid);
    printf("dear allowance:%f\n",sal*0.2);
    printf("housing allowance:%f\n",sal*0.1);
    printf("insentives:%f\n",sal*0.2);
    netsal=sal+(sal*0.5);
    printf("net salary:%f\n",netsal);
    printf("provident fund:%f\n",sal*0.03);
    printf("employee state insurance corporation:%f\n",sal*0.035);
    printf("health insurance:%f\n",sal*0.035);
    printf("tax for salary:%f\n",sal*0.05);
    netsala=(netsal-(sal*0.15));
    printf("net salary=%f\n",netsala);

    }
    while(i<n);

    printf("\n*************************************************************************\n");
    printf("\n pay slip \n");
    printf("\n*************************************************************************\n");
    printf("\n employee name:%s",empname);
    printf("\n employee age:%f",empage);
    printf("\n employee id:%f",empid);
    printf("\n net salary:%f",netsala);
    return 0;
}
