#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h = 0, s = 0;
    std::string str;
    std::getline(std::cin, str);

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ':' && str[i+1] == '-')
        {
            if(str[i+2] == ')')
                h++;
            else
                s++;
        }
    }
    if(h == 0 && s == 0)
        std::cout << "none";
    else if(h > s)
        std::cout << "happy";
    else if(h == s)
        std::cout << "unsure";
    else
        std::cout << "sad";
    return 0;
}