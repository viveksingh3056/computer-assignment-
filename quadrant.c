#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the co-ordinates=\n");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)printf("1st quadrant");
    if(x<0&&y>0)printf("2nd quadrant");
    if(x<0&&y<0)printf("3rd quadrant");
    if(x>0&&y<0)printf("4th quadrant");
    return 0;
}