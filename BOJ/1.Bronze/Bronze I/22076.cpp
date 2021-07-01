#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n);
    std::multiset<int> tmp;
    for(int i = 0; i<n; i++)
    {
        std::cin >> v[i];
        tmp.insert(v[i]);
    }

    std::sort(v.begin(), v.end());
    v.resize(std::unique(v.begin(), v.end())- v.begin());
    std::vector<int> result;
    for(int i = 0; i< std::min(k, (int)v.size()); i++)
    {
        result.push_back(v[i]);
        tmp.erase(tmp.find(v[i]));
    }
    for(int i = 0; i < k -(int)v.size(); i++)
    {
        result.push_back(*tmp.begin());
        tmp.erase(tmp.begin());
    } 

    for(int i = 0; i<k; i++)
        std::cout << result[i] <<' ';
    std::cout << '\n';
    return 0;
}