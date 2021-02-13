#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        std::string str;
        int cnt = 0;
        std::getline(std::cin, str);

        if(str == "#")
            break;

        for(int i = 0; str[i]; i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                cnt++;
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                cnt++;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}