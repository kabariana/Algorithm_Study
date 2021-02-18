#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int r, c;
    std::cin >> r >> c;

    for(int i = 0; i<r; i++)
    {
        for(int i = 0; i<c; i++)
            std::cout << "*";
        std::cout << '\n';
    }
}