#include<stdio.h>
int main()
{
int A[10][10], B[10][10], C[10][10],i,j,k,n,m,p,q
printf("Enter order of matrix 1\n");
scanf("%d%d",&n&n);
printf("Enter order of matrix 2\n");
scanf("%d%d",&p,&q);
if(m!=p)
{
         printf("matrix multication\n");
         return -1;
}
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("Enter the elements\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<p;i++)
{
for(j=0;j<m;j++)
{
printf("Enter the element\n");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
{c[i][j]=0;
for(k=0;k<p;k++)
   {
         C[i][j]=c[i][j]+(A[i][k]*B[k][j]);
   }
 }
}
printf("matrix1\n");
for(i==0;j<n:i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
printf("matrix2\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
printf("resultant matrix2\n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
