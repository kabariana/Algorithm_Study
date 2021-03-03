#include <bits/stdc++.h>

std::string name[7] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b, max, min;
        std::cin >> a >> b;
        max = std::max(a, b);
        min = std::min(a, b);
        std::cout << "Case "<<i<<": ";
        if(max == min)
        {
            switch(max)
            {
            case 1:
                std::cout << "Habb Yakk\n";
                break;
            case 2:
                std::cout << "Dobara\n";
                break;
            case 3:
                std::cout << "Dousa\n";
                break;
            case 4:
                std::cout <<"Dorgy\n";
                break;
            case 5:
                std::cout <<"Dabash\n";
                break;
            case 6:
                std::cout << "Dosh\n";
                break;
            }
        }
        else if(min == 5 && max == 6)
            std::cout << "Sheesh Beesh\n";
        else
            std::cout << name[max] << ' ' << name[min] << '\n';
    }
    return 0;
}