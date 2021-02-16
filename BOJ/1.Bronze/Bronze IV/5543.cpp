#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int tmp, min1, min2;
    min1 = min2 = 2001;

    for(int i = 0; i<3; i++)
    {
        std::cin >> tmp;
        min1 = std::min(tmp, min1);
    }

    for(int i = 0; i<2; i++)
    {
        std::cin >> tmp;
        min2 = std::min(tmp, min2);
    }
    std::cout << min1+min2-50;
    return 0;
}