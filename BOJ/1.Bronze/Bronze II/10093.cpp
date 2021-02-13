#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    if(a > b)
    {
        long long int tmp = a;
        a = b;
        b = tmp;
    }

    if(a!=b)
    {
        printf("%lld\n", b-a-1);
        for(long long int i = a + 1; i<b; i++)
            printf("%lld ", i);

    }
    else
    {
        printf("0");
    }
    return 0;
}