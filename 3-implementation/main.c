#include <stdio.h>
int main(void)
{
int a,m,u,c,s;
float bill;

    
    printf ("\n\n\t\t L&T TECHNOLOGY SERVICES ELECTRICITY BILLING SYSTEM\n\n");
    printf ("\t       ELECTRICITY TARIFF FOR INDUSTRIES(Rates/Unit)\n\n");

printf("Enter Current Meter Number\n");
scanf("%d",&m);
if(m==1234)
{
printf("Choose Category\n");
printf("1-Agriculture\n2-Residential\n3-Commercial\n");
scanf("%d",&c);
if(c==1)
{
printf("Enter Number of units consumed\n");
scanf("%d",&u);
s=20;
if(u>0&&u<50)
{
bill=(u*0.25)+s;
}
else
if(u>=50&&u<150)
{
bill=(u*0.55)+s;
}
else
if(u>=150&&u<300)
{
bill=(u*0.80)+s;
}
else
if(u>=300&&u<500)
{
bill=(u*1)+s;
}
else
if(u>=500 && u<1000)
{
bill=(u*2.5)+s;
}
else
printf("invalid Units\n");
printf("Current meter Number is : %d \n", m);
printf("Number of units consumed : %d\n",u);
printf("Selected catageory is : %d\n ", c);
printf("Your bill amount is : %.2f\n", bill);
}
else
if(c==2)
{
printf("Enter Number of units consumed\n");
scanf("%d",&u);
s=35;
if(u>0&&u<50)
{
bill=(u*1.35)+s;
}
else
if(u>=50&&u<150)
{
bill=(u*2.15)+s;
}
else
if(u>=150&&u<300)
{
bill=(u*3)+s;
}
else
if(u>=300&&u<500)
{
bill=(u*3.5)+s;
}
else
if(u>=500 && u<1000)
{
bill=(u*6)+s;
}
else
printf("invalid Units\n");
printf("Current meter Number is : %d \n", m);
printf("Number of units consumed : %d\n",u);
printf("Selected catageory is : %d\n ", c);
printf("Your bill amount is : %.2f\n", bill);
}
else
if(c==3)
{
printf("Enter Number of units consumed\n");
scanf("%d",&u);
s=65;
if(u>0&&u<50)
{
bill=(u*3)+s;
}
else
if(u>=50&&u<150)
{
bill=(u*4.5)+s;
}
else
if(u>=150&&u<300)
{
bill=(u*5.5)+s;
}
else
if(u>=300&&u<500)
{
bill=(u*6.8)+s;
}
else
if(u>=500 && u<1000)
{
bill=(u*9)+s;
}
else
printf("Invalid Units\n");
printf("Current meter Number is : %d \n", m);
printf("Number of units consumed : %d\n",u);
printf("Selected catageory is : %d\n ", c);
printf("Your bill amount is : %.2f\n", bill);
}
else
printf("Wrong choice");
}
else
printf("Wrong pin number");
}
