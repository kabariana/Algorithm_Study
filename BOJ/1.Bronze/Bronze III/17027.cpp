#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, ans = 0;
    std::cin >> n;

    std::vector<int> a(101, 0), b(101, 0), c(101, 0);

    for(int i = 0; i<n; i++)
    {
        std::cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
        c[i]--;
    }

    for(int i = 0; i<3; i++)
    {
        std::vector<int> s(3);
        int cnt = 0;
        s[i] = 1;
        for(int j = 0; j<n; j++)
        {
            std::swap(s[a[j]], s[b[j]]);
            if(s[c[j]])
                cnt++;
            ans = std::max(ans, cnt);
        }
    }
    std::cout << ans;
    return 0;
}