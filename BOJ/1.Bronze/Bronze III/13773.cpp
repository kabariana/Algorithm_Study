#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int year;
        std::cin >> year;

        if(year == 0)
            break;

        std::cout << year << ' ';
        if(year < 1896)
            std::cout << "No summer games\n";
        else if(year == 1916 || year == 1940 || year == 1944)
            std::cout << "Games cancelled\n";
        else if(year >2020 && year%4 == 0)
            std::cout << "No city yet chosen\n";
        else if(year % 4 == 0)
            std::cout << "Summer Olympics\n";
        else
            std::cout << "No summer games\n";
    }
    return 0;
}