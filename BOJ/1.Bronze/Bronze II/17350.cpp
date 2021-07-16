#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    
    while(N--)
    {
        std::string name;
        std::cin >> name;
        if(name == "anj")
        {
            std::cout << "뭐야;\n";
            return 0;
        }
    }
    std::cout << "뭐야?\n";
    return 0;
}