#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[26] = {0,};
    std::string str;

    std::cin >> str;

    for(int i = 0; str[i]; i++)
        arr[str[i]-'a']++;
    for(int i = 0; i<26; i++)
        std::cout << arr[i] << ' ';
    return 0;
}