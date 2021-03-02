#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n, k;
        ll res = 1;
        std::cin >> n >> k;
        if(n+k==0)
            break;
        k =  std::min(k, n-k);
        for(int i=1; i<=k; i++)
        {
            res*=n;
            res/=i;
            n--;
        }
        std::cout << res <<'\n';
    }
    return 0;
}