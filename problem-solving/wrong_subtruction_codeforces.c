#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for (int i=0 ; i<k;i++)
    {   printf("%d mod 10 == %d\n",n,n%10);
        if(n%10==0){
            n=n/10;
            printf("%d = %d/10 \n",n,n);
        }else{
            n--;
            printf("n-- %d\n",n);
        }
    }
    printf("%d",n);
    
}