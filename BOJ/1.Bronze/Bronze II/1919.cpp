#include <bits/stdc++.h>

int arr1[26], arr2[26];

int main(int argc, char* argv[])
{
    std::string a, b;
    std::cin >> a >> b;

    for(int i = 0; a[i]; i++)
        arr1[a[i]-'a']++;
    for(int i = 0; b[i]; i++)
        arr2[b[i]-'a']++;

    int cnt = 0;
    for(int i = 0; i<26; i++)
        if(arr1[i]!=arr2[i])
            cnt+=std::abs(arr1[i]-arr2[i]);

    std::cout << cnt;
    return 0;
}