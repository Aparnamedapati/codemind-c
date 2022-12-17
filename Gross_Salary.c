#include<stdio.h>
int main()
{
    int b;
    float da,hra,ga;
    scanf("%d",&b);
    if(b<=10000)
    {
        da=b*0.8;
        hra=b*0.2;
    }
    else if(b<=20000)
    {
        da=b*0.9;
        hra=b*0.25;
    }
    else
    {
        da=b*0.95;
        hra=b*0.3;
    }
    ga=b+da+hra;
    printf("%0.2f",ga);
}