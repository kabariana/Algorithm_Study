#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string a, b;
    char oper;

    std::cin >> a >> oper >> b;

    int aleng = a.size()-1;
    int bleng = b.size()-1;

    if(oper == '+')
    {
        if(aleng == bleng)
        {
            std::cout << "2";
            for(int i = 0; i<aleng; i++)
                std::cout << "0";
        }
        else
        {
            std::cout << "1";
            int h = std::max(aleng, bleng);
            int l = std::min(aleng, bleng);
            for(int i = 0; i<h-l-1; i++)
                std::cout << "0";
            std::cout << "1";
            for(int i = 0; i<l; i++)
                std::cout << "0";  
        }
    }
    else if(oper == '*')
    {
        std::cout << "1";
        for(int i = 0; i<aleng+bleng; i++)
            std::cout << "0";
    }
    return 0;
}