// 이분탐색 문제
#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, c;
    std::cin >> n >> c;

    std::vector<ll> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end());

    // 시작점에 공유기 1대
    ll l = 1, h = LLONG_MAX;  
    ll maxv = 0;
    while(l<=h)
    {
        ll mid = (l+h)/2;
        ll start = v[0];
        int cnt = 1; // 0번째에 설치했다고 가정

        for(int i = 0; i < n; i++)
        {
            if(v[i]-start >= mid)
            {
                cnt++;
                start = v[i];
            }
        }

        if(cnt >= c)
        {
            l = mid + 1;
            maxv = std::max(mid, maxv);
        }
        else
            h = mid - 1;
    }
    std::cout << maxv;
    return 0;
}