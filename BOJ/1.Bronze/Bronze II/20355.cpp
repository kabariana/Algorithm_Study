#include<bits/stdc++.h>

bool arr[26];

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i=0; str[i];i++)
        arr[str[i]-'a'] = true;
    
    int cnt = 0;
    for(int i = 0; i<26; i++)
        if(arr[i]==true)
            cnt++;

    int result = 26 - cnt;
    if(result == 0)
        std::cout << "impossible";
    else
        std::cout << result;
    return 0;
}