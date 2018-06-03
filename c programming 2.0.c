#include<stdio.h>
void main()
{
    int x,f,m,a,c,e;
    scanf("%d",&x);
    if (x==1)
    {
        scanf("%d",&m);
        scanf("%d",&a);
        f = m*a;
        printf("%d",f);
    }
    else
    {
        scanf("%d",&m);
        scanf("%d",&c);
        e=m*c*c;
        printf("%d",e);
    }
}
