#include <bits/stdc++.h>

int mask[256];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str;

    mask['R'] = 1;
    mask['B'] = 2;
    mask['G'] = 4;

    std::cin >> n >> str;

    int a = 0, b = 0, i = 0;
    while(i < n)
    {
        b |= mask[str[a]];
        if(b == 7)
        {
            b = 0;
            std::cout << str[a];
            i++;
        }
        a++;
    }
    return 0;
}