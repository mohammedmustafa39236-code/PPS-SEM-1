#include<stdio.h>
void main()
{
int a[3][3],i,j,z=0,nz=0,r,c;
printf("enter 9 elements for a matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]==0)
z++;
else
nz++;
}
}
if(z>nz)
printf("sparse matrix");
else
printf("not a sparse matrix");
}
