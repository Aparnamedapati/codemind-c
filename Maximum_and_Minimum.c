#include<stdio.h>
int main()
{
    int n,a[n],i,c,j,temp,min=0,max=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
                if(i!=j){
                    a[j]=0;
                }
            }
        }
        if(a[i]==c){
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i] || min==0){
                min=a[i];
            }
            k++;
        }
    }
    if(k==0){
        printf("-1");
    }
    else{
        printf("%d %d",min,max);
    }
}