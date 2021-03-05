#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    double sum = 0;
    while(n--)
    {
        double num;
        std::cin >> num;

        if(num == 0)
            sum+=2;
        else
            sum+=1/num;
    }
    std::cout << std::fixed << std::setprecision(8) << sum;
    return 0;
}