#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T, factor, maxv = 0, temp;
    std::cin >> T >> factor;

    for(int i = 0; i<T; i++)
    {
        std::cin >> temp;
        maxv = std::max(temp, maxv);
    }
    std::cout << (factor*maxv-1)/1000 + 1;
    return 0;
}