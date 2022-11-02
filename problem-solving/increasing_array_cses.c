#include<stdio.h>
int main(){
    int n,moves=0;
    int arr[2000000005];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        // printf("%d ",arr[i]);
        if(arr[i+1]<arr[i]){
            // printf("%d < %d\n",arr[i+1],arr[i]);
            moves += arr[i]-arr[i+1];
            // printf("%d = %d - %d\n",moves,arr[i],arr[i+1]);
            arr[i+1]=arr[i];
        }
        
    }
    printf("%d",moves);
}