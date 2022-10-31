#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    
    int totalOdd = (n/2)+(n%2);
    if(k>totalOdd){
        printf("%d",(k-totalOdd)*2);
    }
    if(k<=totalOdd){
        printf("%d",(k*2)-1);
    }
}