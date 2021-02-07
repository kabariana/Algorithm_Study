#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T, d, n, s, p;
    std::cin >> T;
    while(T--)
    {
        std::cin >> d >> n >> s >> p;
        int st = n*s;
        int pt = d + n*p;

        if(pt < st)
            std::cout << "parallelize\n";
        else if(pt > st)
            std::cout << "do not parallelize\n";
        else
            std::cout << "does not matter\n";
    }
    return 0;
}