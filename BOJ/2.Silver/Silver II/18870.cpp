#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> v;

    for(int i = 0; i<n; i++)
    {
        int tmp;
        std::cin >> tmp;
        v.push_back({tmp, i});
    }

    std::sort(v.begin(), v.end());

    std::vector<int> res(1000001);
    int ind = v[0].first;
    int cnt = 0;
    res[v[0].second] = 0;

    for(int i = 1; i<n; i++)
    {
        if(ind == v[i].first)
            res[v[i].second] = cnt;
        else
        {
            res[v[i].second] = ++cnt;
            ind = v[i].first;
        }
    }

    for(int i = 0; i<n; i++)
        std::cout << res[i] << ' ';
    return 0;
}