#include<stdio.h>
int main(){
    int i,n,a[n],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(i%2==0){
                c=0;
            }
            else{
                c=1;
                break;
            }
        }
    }
    if(c!=1){
        printf("True");
    }
    else printf("False");
}