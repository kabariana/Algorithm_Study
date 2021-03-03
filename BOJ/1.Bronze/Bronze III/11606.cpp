#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k, minB, maxS;
    std::cin >> n >> k;
    minB = k, maxS = 1;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::string state;
        std::cin >> num >> state;
        if(state == "SAFE")
            maxS = maxS<num?num:maxS;
        else
            minB = minB<num?minB:num;
    }
    if(minB - maxS == 1)
        std::cout << minB << ' ' << maxS;
    else
        std::cout << maxS+1 << ' ' << minB-1;
    return 0;
}