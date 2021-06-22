#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    
    int TC;
    std::cin >> TC;

    std::cin.ignore();

    while(TC--)
    {
        std::string str;
        int r = 0, a = 0;
        while(true)
        {
            std::getline(std::cin, str);
            if(str.empty())
                break;
            a+= str.size();
            for(auto ch : str)
                if(ch != '#')
                    r++;
        }
        double percentage = 100.0 * r / a;
        percentage = std::round(percentage*10)/10;
        std::cout << "Efficiency ratio is " << percentage << "%.\n";
    }
    return 0;
}