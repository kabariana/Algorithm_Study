#include <bits/stdc++.h>

int arr[26];

int main(int argc, char* argv[])
{
    int maxV = -1;
    std::string str;
    while(std::cin >> str)
    {
        for(int i = 0; str[i]; i++)
            if(isalpha(str[i]))
                arr[str[i]-'a']++;
    }

    for(int i = 0; i<26; i++)
        maxV = std::max(maxV, arr[i]);
    
    for(int i = 0; i<26; i++)
    {
        if(arr[i] == maxV)
            printf("%c", i + 'a');
    }
    return 0;
}