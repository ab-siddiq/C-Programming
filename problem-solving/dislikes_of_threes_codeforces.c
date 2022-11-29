#include<stdio.h>
void check_threes(int arr[],int n){
    int k;
    while(n--){
        scanf("%d",&k);
        printf("%d\n",arr[k]);
    }
}
int main(){
    int t,k,arr[1666],j=1;

    for(int i=1;i<=1666;i++){
        if(i%3 !=0 && i%10 !=3){
        arr[j]=i;
        j+=1;
        }
    }
    scanf("%d",&t);
    check_threes(arr,t);
}