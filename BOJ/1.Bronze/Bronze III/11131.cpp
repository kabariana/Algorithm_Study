#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n, weight, sum = 0;
        std::cin >> n;
        for(int i = 0; i<n; i++)
        {
            std::cin >> weight;
            sum+=weight; 
        }

        if(sum > 0)
            std::cout << "Right\n";
        else if(sum < 0)
            std::cout << "Left\n";
        else
            std::cout << "Equilibrium\n";
    }
    return 0;
}