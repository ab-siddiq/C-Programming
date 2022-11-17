#include <stdio.h>
#include <string.h>
int main()
{
    char ch[101];
    int n, i = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        fgets(ch, sizeof(ch), stdin);
        if (strlen(ch) > 10)
        {
            printf("%c%d%c", ch[0], strlen(ch) - 3, ch[strlen(ch) - 2]);
        }
        else
        {
            puts(ch);
        }
        n--;
    }
}