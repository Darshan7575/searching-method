#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,ele,pos;
scanf("%d",&n);
int *arr=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the element to be searched\n");
scanf("%d",&ele);
pos=-1;
for(i=0;(i<=n/4);i++)
{
if(arr[i]==ele)
{pos=i;
break;}
if(arr[n/2-i]==ele)
{pos=n/2-i;
break;}
if(arr[n/2+i+1]==ele)
{pos=n/2+i+1;
break;}
if(arr[n-i-1]==ele)
{pos=n-i-1;
break;}
}
if(pos==-1)
printf("Element not found");
else
printf("Element found at %d position",pos+1);
}
