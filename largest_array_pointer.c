#include<stdio.h>
int array(int a[],int* n)
{
    int i;
    for(i=0;i<*n;i++)
    scanf("%d",&a[i]);
    return 0;
}
int largest(int *p,int *q)
{
    int i,m=*p;
    for(i=0;i<*q;i++)
    {
        if(*(p+i)>m)m=*(p+i);
    }return m;
}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    array(a,&n);
    printf("%d",largest(a,&n));
    return 0;
}