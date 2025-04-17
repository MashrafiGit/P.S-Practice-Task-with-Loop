#include<stdio.h>
int main()
{
    int n;
    long long int t;
    long long int sum = 1;
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &t);
        for (int i = 1; i <= t; i++)
        {
            sum *= i;
        }
        printf("%lld\n", sum);
        sum = 1;
    }
    

    return 0;
}