#include <bits/stdc++.h>
typedef long long ll;

ll getSum(int n)
{
    ll sum = 0;
    for(int i = 1; i<=n; i++)
        sum+=i;
    return sum;
}

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;
    ll sum = 1;
    for(int i = a; i<=b; i++)
    {
        sum*=getSum(i);
        sum%=14579;
    }
    std::cout << sum;
    return 0;
}