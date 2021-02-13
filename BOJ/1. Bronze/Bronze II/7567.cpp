#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int height = 10;
    int temp = str[0];

    for(int i = 1; str[i]; i++)
    {
        if(str[i] == temp)
            height += 5;
        else 
            height += 10;
        temp = str[i];
    }
    std::cout << height;
    return 0;
}