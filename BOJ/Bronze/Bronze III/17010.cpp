#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int num; 
        char c;

        std::cin >> num >> c;

        for(int i = 0; i < num; i++)
            std::cout << c;
        std::cout << '\n';
    }
    return 0;
}