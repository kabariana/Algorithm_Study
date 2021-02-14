#include <bits/stdc++.h>

char arr[4][2] = {
    {'E', 'I'},
    {'S', 'N'},
    {'T', 'F'},
    {'J', 'P'}
};

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == arr[i][0])
            std::cout << arr[i][1];
        else
            std::cout << arr[i][0];
    }
    return 0;
}