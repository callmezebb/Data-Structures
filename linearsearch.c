#include<stdio.h>
void main()
{
int n,i,x,c=0;
printf("enter the limit:");
scanf("%d",&n);
int a[n];
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be checked:");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]==x)
{
c++;
break;
}
}
if(c==1)
{
printf("the number is present in the array:");
}
else
{
printf("the element is not present in the array:");
}
}

