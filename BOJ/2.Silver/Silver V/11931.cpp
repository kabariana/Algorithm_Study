#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v;

    while(n--)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    for(auto i : v)
        std::cout << i << '\n';
    return 0;
}