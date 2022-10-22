#include<stdio.h>

int main(){
    int m,n,ans;
    scanf("%d%d",&n,&m);
    if(m==1 && n==1){
        ans = 0;
    }else if((n==1 && m>1)){
        ans = m-1;
    }else if( (m==1 && n>1)){
        ans = n-1;
    }
    else{
        ans = (m-1)*n;
    }
    printf("%d",ans);
}