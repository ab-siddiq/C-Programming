#include<stdio.h>
int compareWinner(int a, int b){
    int matchWinner;
    if(a>b){
       matchWinner = a;
    }
    else if(a<b){
        matchWinner = b;
    }else{
        matchWinner = 0;
    }
    return matchWinner;
}
int main(){
    int a,b,c,d,match1,match2,final;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    match1 = compareWinner(a,b);
    match2 = compareWinner(c,d);
    final = compareWinner(match1,match2);
    printf("Match 1 winner: %d \n",match1);
    printf("Match 2 winner: %d \n",match2);
    printf("Final match winner: %d \n",final);

    if(final > 0){
        printf("Match was fare: Yes!");
    }else{
        printf("Match was fare: No");
    }

}