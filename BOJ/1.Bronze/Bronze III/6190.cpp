#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll n, cnt = 0;
    std::cin >> n;
    
    while(n!=1)
    {
        cnt++;
        if(n&1)
            n = 3*n+1;
        else 
            n/=2;
    }
    std::cout << cnt;
    return 0;
}