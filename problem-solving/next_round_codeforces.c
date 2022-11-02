#include<stdio.h>
int main(){
    int n,k,i,c=0;
    scanf("%d%d",&n,&k);
    int arr[50];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            c++;
        }
    }
    printf("%d",c);
}