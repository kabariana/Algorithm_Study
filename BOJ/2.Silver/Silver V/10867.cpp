#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::vector<int> v;
    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());

    for(int i = 0; i <v.size(); i++)
        std::cout << v[i] << ' ';
    return 0;
}