#include<stdio.h>
int main(){
    int n,a,b,c,m=3,r=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c || b+c == a || a+c == b ){
            r=1;
        }
        else{
            r=0;
        }
        if(r==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
