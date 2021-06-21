#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, num, tmp1 = 0, tmp2 = 0;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        std::cin >> num;
        tmp1 += num / 2;
        if(num & 1) 
            tmp2++;
    }

    if(tmp1 == tmp2)
        std::cout << "YES\n";
    else if(tmp2 > tmp1)
        std::cout << "NO\n";
    else
    {
        int dist = tmp1 - tmp2;
        if(dist % 3 == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}