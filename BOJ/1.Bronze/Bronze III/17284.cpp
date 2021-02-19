#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::getline(std::cin, str);

    int n = 5000;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == '1')
            n-=500;
        if(str[i] == '2')
            n-=800;
        if(str[i] == '3')
            n-=1000;
    }
    std::cout << n;
    return 0;
}