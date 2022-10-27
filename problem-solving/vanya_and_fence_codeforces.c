#include<stdio.h>
int main(){
    int f,h,x,w=0;
    scanf("%d%d",&f,&h);
    
    for(int i=0;i<f;i++){
        scanf("%d",&x);
        // x>7 ? w +=2 : w++;
        if(x>h){
            w +=2;
        }else{
            w++;
        }
    }
    printf("%d",w);
}