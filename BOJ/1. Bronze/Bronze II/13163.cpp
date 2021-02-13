#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while (T--)
    {
        std::string str;
        std::getline(std::cin, str);
        int index = 0;
        for (int i = 0; str[i]; i++)
        {
            if (str[i] == ' ')
            {
                index = i;
                break;
            }
        }
        std::cout << "god";
        for (int i = index + 1; str[i]; i++)
        {
            if (str[i] == ' ')
                continue;
            std::cout << str[i];
        }
        std::cout << '\n';
    }
    return 0;
}