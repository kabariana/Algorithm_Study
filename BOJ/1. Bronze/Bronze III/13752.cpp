#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    while(n--)
    {
        int num;
        std::cin >> num;

        for(int i = 0; i<num; i++)
            std::cout << '=';
        std::cout << '\n';
    }
    return 0;
}