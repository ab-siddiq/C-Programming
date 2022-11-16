#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,run,count,sq;
    scanf("%d",&n);
    

    for( i=0;i<n;i++){
       scanf("%d",&run);
       int square[run];
       count=0;
       sq=0;
        for(j=0;j<run;j++){
            scanf("%d",&square[j]);
            sq = sqrt(square[j]);
            if(sq*sq == square[j]){
                count +=1;
            }
        }
        if(count>0){
            printf("%d\n",count);
        }else{
            printf("-1\n");
        }
        
        
   
        // for(j=0;j<run;j++){
        //     printf("%d",runs[j]);
        // }printf("\n");
    }
}