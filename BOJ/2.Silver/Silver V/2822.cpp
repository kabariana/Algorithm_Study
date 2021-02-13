#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<std::pair<int, int>> vpii;
    for(int i = 1; i<=8; i++)
    {
        int num;
        std::cin>>num;
        vpii.push_back({num, i});
    }

    std::sort(vpii.begin(), vpii.end(), std::greater<std::pair<int, int>>());

    int sum = 0;
    std::vector<int> v;
    for(int i = 0; i<5; i++)
    {
        sum+=vpii[i].first;
        v.push_back(vpii[i].second);
    }
    std::sort(v.begin(), v.end());

    std::cout << sum << '\n';
    for(int i = 0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}