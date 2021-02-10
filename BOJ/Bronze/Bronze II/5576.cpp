#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int wu[10];
    int ku[10];
    int w = 0, k = 0;

    for(int i = 0; i < 10; i++)
        std::cin >> wu[i];
    for(int i = 0; i < 10; i++)
        std::cin >> ku[i];

    std::sort(wu, wu+10);
    std::sort(ku, ku+10);

    for(int i = 9; i>=7; i--)
    {
        w += wu[i];
        k += ku[i];
    }
    std::cout << w << ' ' << k;
    return 0;
}