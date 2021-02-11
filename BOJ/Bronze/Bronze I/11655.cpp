#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::getline(std::cin, str);

    for(int i = 0; str[i]; i++)
    {
        if(std::islower(str[i]))
        {
            if(str[i] + 13 > 'z')
                str[i] -= 13;
            else str[i] += 13; 
        }
        if(std::isupper(str[i]))
        {
            if(str[i] + 13 > 'Z')
                str[i] -= 13;
            else str[i] += 13;
        }
        std::cout << str[i];
    }
    return 0;
}