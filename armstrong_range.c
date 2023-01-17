#include<stdio.h>
#include<math.h>
int main()
{
    int p=0,e,b=0,r1,r2,i;
    printf("enter the range=\n");
scanf("%d%d",&r1,&r2);
for ( i = r1+1; i < r2; i++)
{p=0;b=0;
    e=i;
    for(;i!=0;)
    {
        p++;i/=10;
    }i=e;
    for(;i!=0;)
    {
        b=b+pow(i%10,p);i/=10;
    }
    if(e==b)printf("%d,",e);
}
return 0;}