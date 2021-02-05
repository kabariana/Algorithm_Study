#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T, num;
    double price[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
    double sum = 0;

    std::cin >> T;

    while(T--)
    {
        sum = 0;
        for(int i = 0; i<5; i++)
        {
            std::cin>> num;
            sum+= price[i] * num;
        }
        printf("$%.2lf\n", sum);
    }
}