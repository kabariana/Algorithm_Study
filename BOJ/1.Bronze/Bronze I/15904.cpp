#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::getline(std::cin, str);

    std::string key = "UCPC";

    int cnt = 0;
    for(int i = 0; str[i]; i++)
    {
        if(cnt == 4)
            break;
        else if(str[i] == key[cnt])
            cnt++;
    }
    if(cnt == 4)
        std::cout << "I love UCPC";
    else
        std::cout << "I hate UCPC";
    return 0;
}