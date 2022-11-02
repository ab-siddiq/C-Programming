#include<stdio.h>
int main(){
    int n,c=0,petya,vasya,tonya;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&petya,&vasya,&tonya);
        if((petya==1 && vasya==1) || (petya ==1 && tonya ==1) || (vasya ==1 && tonya ==1) || (vasya ==1 && tonya ==1 && petya ==1)){
            c++;
        }
    }
    printf("%d",c);
}