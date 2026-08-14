#include <stdio.h>
int main()
{
int i,j,n,m,count,row=0,max=0;
int arr[100][100];
printf("Enter the rows and columns:");
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<n;i++)
{
count= 0;
for(j=0;j<m;j++)
{
if(arr[i][j]==1){
count++;
}
}
if (count > max)
{
max = count;
row=i;
}
}
printf("The max Count of 1's: %d",max);
printf("\nRow : %d",row);
return 0;
}
