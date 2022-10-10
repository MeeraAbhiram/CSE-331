#include <stdio.h>

int main()
{

    long int T;
    scanf("%ld", &T);
    while (T--)
    {
        long int n, d, i = 0, j = 0, m, q, max;
        scanf("%ld%ld", &n, &d);
        long int p[n], s[n];
        while (i < n)
        {
            scanf("%ld", &p[i]);
            i++;
        }
        while (j < n)
        {
            scanf("%ld", &s[j]);
            j++;
        }
        max = s[0] + s[1];
        for (m = 0; m < n; m++)
        {
            for (q = m + 1; q < n; q++)
            {
                if ((p[m] + p[j]) <= d)
                {
                    if ((s[m] + s[q]) > max)
                    {
                        max = (s[m] + s[q]);
                    }
                }
            }

            if (p[m] <= d)
            {
                if (s[m] > max)
                {
                    max = s[m];
                }
            }
        }
        printf("%ld\n",max);
    }

    return 0;
}