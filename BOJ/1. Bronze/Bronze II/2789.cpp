#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    char arr[9] = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
    char* c;
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        c = std::find(arr, arr+9, str[i]);
        if(c == arr+9)
            std::cout << str[i];
    }
    return 0;
}