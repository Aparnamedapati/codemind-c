#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    double c;
    c=(p*pow((1+(r/100.0)),t));
    printf("%.2f",c);
}