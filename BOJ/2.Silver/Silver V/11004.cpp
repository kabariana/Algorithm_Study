#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k;
    int num;

    std::vector<int> v;

    std::cin >> n >> k;

    for(int i = 0; i<n; i++)
    {
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());

    std::cout << v[k-1];
    return 0;
}