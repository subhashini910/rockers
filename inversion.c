#include<stdio.h>
int main()
{
    int n;
    printf("Enter ur no to want to get");
    scanf("%d",&n);
 int a[n],i,c=0,b[n],j;
 int count=0;

 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);

 }
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);

 }
 for(j=0;j<=n;j++)
 {c=0;
 for(i=1;i<=a[j];i++)
 {
     if(a[j]%i==0)
     {
         c++;
     }

 }
 b[j]=c;}
 for(i=0;i<n;i++)
 {
 printf("\n %d",b[i]);
 }
 for(i=0;i<n;i++)//loop to find a set combination
 {
     for(j=i;j<n;j++)
     {
       if(b[i]>b[j])
       {
           count++;
       }
     }
 }
 printf("\ncount=%d",count);//set count
return 0;



}
