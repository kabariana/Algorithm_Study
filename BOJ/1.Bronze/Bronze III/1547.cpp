#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int m;
    std::cin >> m;
    std::vector<std::pair<int, int>> v;

    for(int i = 0; i<m; i++)
    {
        int x, y;
        std::cin >> x >> y;
        v.push_back(std::make_pair(x, y));
    }
    int b_location = 1;

    for(int i = 0; i<m; i++)
    {
        int f = v[i].first;
        int l = v[i].second;

        if(f == b_location) 
            b_location = l;
        else if(l == b_location)
            b_location = f;
    }

    std::cout << b_location;
    return 0;
}