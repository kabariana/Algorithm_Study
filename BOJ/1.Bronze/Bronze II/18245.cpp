#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    int tmp = 1;
    while(true)
    {
        std::getline(std::cin, str);
        if(str == "Was it a cat I saw?")
            break;
        for(int i = 0; i < str.size(); i = i + tmp + 1)
            std::cout << str[i];
        std::cout << '\n';
        tmp++;
    }  
    return 0;
}