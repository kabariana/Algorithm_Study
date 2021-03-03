#include <bits/stdc++.h>
typedef long long ll;

ll func(ll a, ll b)
{
    ll ret = 1;
    for(int i = 0; i<b; i++)
        ret*=a;
    return ret;
}

int main(int argc, char* argv[])
{
    int N;
    std::cin >> N;

    ll sum = 0;
    while(N--)
    {
        ll num, a, b;
        std::cin >> num;
        a = num/10;
        b = num%10;
        sum+=func(a, b);
    }
    std::cout << sum;
    return 0;
}