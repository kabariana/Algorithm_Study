#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[3];

    for(int i = 0; i<3; i++)
        std::cin >> arr[i];

    std::sort(arr, arr+3);

    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
        std::cout << arr[str[i]-'A'] << ' ';
    return 0;
}