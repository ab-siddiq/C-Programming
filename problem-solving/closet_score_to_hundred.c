#include<stdio.h>
int main(){
    int i,j,n,run,max;
    scanf("%d",&n);
    

    for( i=0;i<n;i++){
       scanf("%d",&run);
       int runs[run];
       max=0;
        for(j=0;j<run;j++){
            scanf("%d",&runs[j]);
            if(max<runs[j]){
                max=runs[j];
            }
        }
        printf("%d\n",max);
   
        // for(j=0;j<run;j++){
        //     printf("%d",runs[j]);
        // }printf("\n");
    }
}