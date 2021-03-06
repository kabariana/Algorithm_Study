#include <bits/stdc++.h>

int main(int argc, char* argv[]) 
{
    int a, b, t;
    std::cin >> t;
    
    while(t--)
    {
        int price = 0;
        std::cin >> a >> b;
        if (a == 1)
            price += 5000000;
        else if (2 <= a && a <= 3)
            price += 3000000;
        else if (4 <= a && a <= 6)
            price += 2000000;
        else if (7 <= a && a <= 10)
            price += 500000;
        else if (11 <= a && a <= 15)
            price += 300000;
        else if (16 <= a && a <= 21)
            price += 100000;
        if (b == 1)
            price += 5120000;
        else if (2 <= b && b <= 3)
            price += 2560000;
        else if (4 <= b && b <= 7)
            price += 1280000;
        else if (8 <= b && b <= 15)
            price += 640000;
        else if (16 <= b && b <= 31)
            price += 320000;
        std::cout << price << '\n';
    }
}