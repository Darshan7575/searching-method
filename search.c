#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,ele,pos;
printf("Enter the number of elements that will be in the array\n");
scanf("%d",&n);
int *arr=(int*)malloc(sizeof(int)*n);   //alloactes the memory to the prescribed number of elements ie 'n' elements
printf("Enter the elements\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("Enter the element to be searched\n");
scanf("%d",&ele);
pos=-1;                        
for(i=0;(i<=n/4);i++)     // the terminating condition has 'n/4' since we compare the element to be searched with 4 elements of the array at a time
{
    if(arr[i]==ele)           // compares the element to be searched with the elements starting from 1st position
      { pos=i;
        break;}
    if(arr[n/2-i]==ele)       // compares the element to be searched with the elements starting from middle towards start of the array
      { pos=n/2-i;
        break;}
    if(arr[n/2+i+1]==ele)     //compares the element to be searched with the elements starting from middle towardds end of the array
      { pos=n/2+i+1;
        break;}
    if(arr[n-i-1]==ele)       //compares the element to be searched with the elements starting from end of the array
      { pos=n-i-1;
        break;}
}
if(pos==-1)
    printf("Element not found");
else
    printf("Element found at %d position",pos+1);
}
