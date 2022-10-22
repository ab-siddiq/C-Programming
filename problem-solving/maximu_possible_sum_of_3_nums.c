#include<stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b & b>c){
        sum = a+b;
    }else if(a>c && c>b){
        sum = a+c;
    }else if(a<b && a<c){
        sum = b+c;
    }else if(a==b){
        sum = a+c;
    }else if(b==c){
        sum = a+c;
    }else if(a==c){
        sum = a+b;
    }else if( a==b && b == c){
        sum = a+b;
    }
    printf("%d",sum);

}