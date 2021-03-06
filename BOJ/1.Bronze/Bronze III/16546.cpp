#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n-1; i++)
    {
        int num;
        std::cin >> num;
        v[--num]++;
    }
    std::cout << std::find(v.begin(), v.end(), 0) - v.begin() + 1;
    return 0;
}