#include<stdio.h>
void main()
{
int limit,position,parent,rc,lc;
printf("Enter the limit:");
scanf("%d",&limit);
int a[limit];
printf("Enter the elements of tree:\n");
for(int i=1;i<=limit;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position of the node:");
scanf("%d",&position);
parent=position/2;
if(parent<1)
{
printf("No parent is present\n");
}
else 
{
printf("The parent of position %d is %d\n",position,a[parent]);
}
lc=2*position;
if(lc>limit)
{
printf("No left child is present\n");
}
else
{
printf("The left child of position %d is %d\n",position,a[lc]);
}
rc=(2*position)+1;
if(rc>limit)
{
printf("The right child is not present\n");
}
else
{
printf("The right child of position %d is %d\n",position,a[rc]);
}
}



