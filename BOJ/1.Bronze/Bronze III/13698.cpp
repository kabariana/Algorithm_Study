#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[4] = {1, 0, 0, 2};
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        switch(str[i])
        {
        case 'A':
            std::swap(arr[0], arr[1]);
            break;
        case 'B':
            std::swap(arr[0], arr[2]);
            break;
        case 'C':
            std::swap(arr[0], arr[3]);
            break;
        case 'D':
            std::swap(arr[1], arr[2]);
            break;
        case 'E':
            std::swap(arr[1], arr[3]);
            break;
        case 'F':
            std::swap(arr[2], arr[3]);
            break;
        }
    }

    for(int i = 0; i<4; i++)
        if(arr[i] == 1)
            std::cout << i+1 <<'\n';
    for(int i = 0; i<4; i++)
        if(arr[i]==2)
            std::cout << i+1 <<'\n';
    return 0;
}