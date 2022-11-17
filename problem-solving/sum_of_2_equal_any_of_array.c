#include <stdio.h>
int main()
{
    int n, m = 10, r = 0, s = 0;
    scanf("%d", &n);
    int number[m];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &number[i]);
        }

        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (i != j)
                {
                    s = number[i] + number[j];
                printf("%d+%d=%d=>\n",number[i],number[j],s);
                }
                for (int k = 0; k < m; k++)
                {
                    // printf("%d==%d\n", s, number[k]);
                    if (s == number[k])
                    {
                        r = 1;
                        break;
                    }
                }
            }
        }
        if (r == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        r=0;
    }
}
