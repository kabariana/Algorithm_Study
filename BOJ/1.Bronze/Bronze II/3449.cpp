#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        std::string a, b;
        std::cin >> a >> b;
        int res = 0;
        for(int i = 0; i <a.size(); i++)
            if(a[i] != b[i])
                res++;
        std::cout << "Hamming distance is " << res << ".\n";
    }
    return 0;
}