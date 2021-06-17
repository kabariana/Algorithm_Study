#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    int i = 0, j = v.size() - 1;
    int MAX = 2e9;

    std::pair<int, int> res;

    while(i < j)
    {
        int a = v[i];
        int b = v[j];

        if(std::abs(a + b) < MAX)
        {
            MAX = abs(a + b);

            res.first = v[i];
            res.second = v[j];
        }

        if(a + b < 0)
            i++;
        else
            j--;
    }
    std::cout << res.first << " " << res.second << '\n';
    return 0;
}