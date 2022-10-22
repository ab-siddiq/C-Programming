#include<stdio.h>
int winner(int winner){

}
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
    printf("%d",match1);
    printf("%d",match2);
    printf("%d",final);

    if(final > 0){
        printf("Yes");
    }else{
        printf("No");
    }

}