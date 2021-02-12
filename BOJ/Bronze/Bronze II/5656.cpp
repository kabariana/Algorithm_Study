#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int i = 1;
    while(true)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr), std::cout.tie(nullptr);

        int a, b;
        std::string op;

        std::cin >> a >> op >> b;

        if(op == "E")
            break;
        
        std::cout << "Case " << i << ": ";
        
        if(op == ">")
            std::cout << (a>b?"true":"false");
        else if(op == ">=")
            std::cout << (a>=b?"true":"false");
        else if(op == "<")
            std::cout << (a<b?"true":"false");
        else if(op == "<=")
            std::cout << (a<=b?"true":"false");
        else if(op == "==")
            std::cout << (a==b?"true":"false");
        else if(op == "!=")
            std::cout << (a!=b?"true":"false");
        i++;
        std::cout << '\n';
    }
    return 0;
}