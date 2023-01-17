#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in it=\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
c+=a[i];}
printf("%d,",c);
return 0;
}