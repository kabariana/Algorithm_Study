#include <bits/stdc++.h>

typedef std::pair<int, std::pair<int, std::string>> iis;
typedef std::vector<iis> viis; 

bool cmp(iis a, iis b){
    if(a.first == b.first)
        a.second.first < b.second.first;
    return a.first > b.first;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;

    std::string str;
    viis v;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        std::cin >> str >> m;
        v.push_back({m, {i, str}});
    }

    std::sort(v.begin(), v.end(), cmp);

    std::cout << v[0].second.second << '\n';
    return 0;
}