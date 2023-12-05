#include<stdio.h>
void main()
{
struct polynomial{
int coeff;
int expo;
};
int limit;
printf("Enter the number of variables:");
scanf("%d",&limit);
struct polynomial x[limit];
printf("Enter the exponents and coefficient:\n");
for(int i=0;i<limit;i++)
{
scanf("%d",&x[i].coeff);
scanf("%d",&x[i].expo);
}
printf("The polynomial is :\n");
for(int i=0;i<limit;i++)
{
if(i!=limit-1)
{
printf("%dx^%d+",x[i].coeff,x[i].expo);
}
else
{
printf("%dx^%d\n",x[i].coeff,x[i].expo);
}
}
}


