#include<stdio.h>
int main()
{
    int t,rev=0;
    scanf("%d",&t);
    while(t--)
   {
       int rev=0,t,n,r;
       scanf("%d",&n);t=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
   
    if(t==rev)printf("True
");
    else printf("False
");
}
}