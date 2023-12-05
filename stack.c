#include<stdio.h>
int a[5],max_size,top=-1;
void push();
void pop();
void peek();
void display();
void main()
{
int choice;
printf("enter the the maximum size of the stack:\n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("\nenter the choice \n1.push 2.pop 3.peek 4.display 5.exit \n");
scanf("%d",&choice);
if(choice==1)
{
push();
}
else if(choice==2)
{
pop();
}
else if(choice==3)
{
peek();
}
else if(choice==4)
{
display();
}
}
}
void push()
{
if(top==(max_size-1))
{
printf("\noverflow\n");
}
else
{
top=top+1;
printf("enter the elements:\n");
scanf("%d",&a[top]);
}
}
void pop()
{
int item;
if(top==-1)
{
printf("\nunderflow\n");
}
else
{
item=a[top];
printf("%d is poped\n",item);
top=top-1;
}
}
void peek()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("top element is %d",a[top]);
}
}
void display()
{
int i;
for(i=max_size-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
}



































