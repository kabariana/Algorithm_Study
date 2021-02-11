#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, y, d = 0;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cin >> x >> y;

    for(int i = 1; i < x; i++)
        d += arr[i-1];
    d += y;

    switch(d%7)
    {
    case 0:
        std::cout << "SUN\n";
        break;
    case 1:
        std::cout << "MON\n";
        break;
    case 2:
        std::cout << "TUE\n";
        break;
    case 3:
        std::cout << "WED\n";
        break;
    case 4:
        std::cout << "SUN\n";
        break;
    case 5:
        std::cout << "SUN\n";
        break;
    case 6:
        std::cout << "SUN\n";
        break;
    }
}