#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::getline(std::cin, str);

    int tmp = 0;

    while(true)
    {
        std::getline(std::cin, str);
        if(str == "고무오리 디버깅 끝") 
            break;
        else if(str == "고무오리")
        {
            if(!tmp)
                tmp += 2;
            else
                tmp--;
        }
        else if(str == "문제")
            tmp++;
    }
    if(!tmp)
        std::cout << "고무오리야 사랑해";
    else
        std::cout << "힝구";
    return 0;
}