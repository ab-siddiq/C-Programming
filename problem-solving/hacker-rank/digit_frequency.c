#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1002];
    scanf("%s",s);
    int high=10;
    int freq[high+1];
    int len = strlen(s);
    for(int i=0;i<high;i++){
        freq[i]=0;
    }
    for(int i=0;i<len;i++){
        if(s[i]>='0' && s[i]<='9' ){
            freq[(s[i]-'0')]++;
        }
    } 
    for(int i=0;i<high;i++){
        printf("%d %d\n",freq[i],i);
    }   
    return 0;
}
