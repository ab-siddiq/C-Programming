#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int i=0;
    // while(ch[i] !='\0'){
        if(ch[0]>='a' && ch[0] <= 'z'){
            ch[0] -= 32;
            puts(ch);
        }else{
            puts(ch);
        }
    // }
}