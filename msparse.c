#include<stdio.h>
int main()
{
int m,n,x,y,count=0;
printf("Enter the no of rows\n");
scanf("%d", &m);
printf("Enter the no of columns\n");
scanf("%d",&n);
int arr[m][n];
printf("Enter the elemets of matrix\n");
for(x=0;x<m;x++)
{
for(y=0;y<n;y++)
{
printf("Enter A,%d,%d: \n",(x+1),(y+1));
scanf("%d", &arr[x][y]);
}
}
for(x=0;x<m;x++)
{
for(y=0;y<n;y++)
{
if(arr[x][y]==0)
{
count+=1;
}
}
}
if(count>=((m*n)/2))
{
printf("Sparse Matrix\n");
}
else
{
printf("Not Sparse Matrix\n");
}
}


