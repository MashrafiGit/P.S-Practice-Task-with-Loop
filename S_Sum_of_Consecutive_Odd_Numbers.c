
#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &x, &y);
        int sum = 0;

        if (x > y)
        {
            int temp = y;
            y = x;
            x = temp;
            // printf("%d %d", x, y);
        }

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}