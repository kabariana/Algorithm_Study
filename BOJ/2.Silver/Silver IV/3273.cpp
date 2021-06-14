#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    int x;
    std::cin >> x;

    std::sort(v.begin(), v.end());

    int cnt = 0;
    int l = 0, r = n - 1;
    while(l < r)
    {
        if(v[l] + v[r] == x)
        {
            r--;
            cnt++;
        }
        else if(v[l] + v[r] > x) 
            r--;
        else if(v[l] + v[r] < x)
            l++;
    }
    std::cout << cnt << '\n';
    return 0;
}