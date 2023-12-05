#include<stdio.h>
void quicksort(int ar[],int start,int end);
void main()
{
int size,ar[20];
printf("Enter the size of the array:\n");
scanf("%d",&size);
ar[size];
printf("Enter the elements of the array:\n");
for(int i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
quicksort(ar,0,size-1);
printf("Sorted array:\n");
for(int i=0;i<size;i++)
{
printf("%d ",ar[i]);
}
}
void quicksort(int ar[],int start,int end)
{
int i,j,pivot,temp;
if(start<end){
i=start;
pivot=start;
j=end;
while(i<j)
{
while(ar[i]<=ar[pivot]&&i<end)
{
i++;
}
while(ar[j]>ar[pivot])
{
j--;
}
if(i<j)
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
}
temp=ar[pivot];
ar[pivot]=ar[j];
ar[j]=temp;
quicksort(ar,start,j-1);
quicksort(ar,j+1,end);
}
}





