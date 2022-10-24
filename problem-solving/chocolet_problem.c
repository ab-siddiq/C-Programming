#include<stdio.h>
int main(){
    //problem: suppose you buy n number o chocolet, for every 4 packet you will get 1 chocolet. How many chocolet wil you get?
    int chocolet, packet,n;
    scanf("%d",&n);
    chocolet = n;
    packet =n;
    //  printf("%d %d",chocolet,packet);
   while(packet>=4){
    chocolet += (packet/4);
    packet = (packet/4) + (packet%4);
    // printf("%d\n",chocolet);
   }
  printf("%d",chocolet);
}