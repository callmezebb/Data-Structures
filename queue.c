#include<stdio.h>
int a[50],front=0,rear=-1,Max_size,item;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
printf("Enter the maximum size of the array:\n");
scanf("%d",&Max_size);
int choice;
while(choice!=5)
{
printf("\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit \nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
}
}
}
void enqueue()
{
if(rear==Max_size-1)
{
printf("OVERFLOW\n");
}
else
{
rear=rear+1;
printf("Enter the number to be enqueued:");
scanf("%d",&item);
a[rear]=item;
}
}
void dequeue()
{
if(rear==front)
{
item=a[front];
printf("The dequeued element is:%d",item);
front=0;
rear=-1;
}
else if(rear<front)
{
printf("UNDERFLOW\n");
}
else
{
item=a[front];
printf("The dequeued element is:%d",item);
front++;
}
}
void peek()
{
if(rear<front)
{
printf("UNDERFLOW");
}
else
printf("Front element=%d\n",a[front]);
}
void display()
{
if(rear!=-1)
{
printf("The element in array:\t");
for(int i=front;i<=rear;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
else
printf("UNDERFLOW\n");
}


















































