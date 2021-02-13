#include <bits/stdc++.h>

bool compare(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
    return a.first < b.first;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int, std::string>> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i].first >> v[i].second;

    std::stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++)
        std::cout << v[i].first << ' ' << v[i].second << '\n';
        
    return 0;
}