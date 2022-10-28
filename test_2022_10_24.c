#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



int main()
{
        int n, m, t, s = 0;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                scanf("%d", &t);
                if (t > 0)s += t;
            }
        }
        printf("%d", s);
        return 0;
    }

