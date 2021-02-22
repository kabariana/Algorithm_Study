#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, n, minv = INT_MAX;
    std::cin >> a >> b >> n;

    for(int i = 0; i<n; i++)
    {
        int cost, citycnt;
        std::cin >> cost >> citycnt;
        std::vector<int> v;
        for(int i = 0; i<citycnt; i++)
        {
            int num;
            std::cin >> num;
            if(num == a || num == b)
                v.push_back(num);
        }
        if(v.size()== 2)
            if(v[0] == a && v[1] == b)
                minv = std::min(minv, cost);
    }
    if(minv == INT_MAX)
        std::cout << "-1";
    else
        std::cout << minv;
    return 0;
}