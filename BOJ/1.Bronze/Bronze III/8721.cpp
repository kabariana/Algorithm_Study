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

    int cnt = 0, var = 1;
    for(int i = 0; i<n; i++)
    {
        if(v[i]!=var)
            cnt++;
        else
            var++;
    }
    std::cout << cnt;
    return 0;
}