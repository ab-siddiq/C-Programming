#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t1,t2,t3,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d%%",&arr[i]);
    }
    for(int i=0;i<n;i++){
        t1=0;t2=0;t3=0;
        if(arr[i]>=0 && arr[i]<60){
            t1 = 60-arr[i]+100;
        }else if(arr[i]>=60 && arr[i]<80){
            t2= (80-arr[i])*2 + 40;
        }else if(arr[i]>=80 && arr[i]<=100){
            t3 = (100-arr[i])*3;
        }
        printf("%d minutes\n",t1+t2+t3);
    }
    return 0;
}
