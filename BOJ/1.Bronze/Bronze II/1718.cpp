#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str, key;
    std::getline(std::cin, str);
    std::cin >> key;

    int mod = key.size();
    std::string res;
    for(int i = 0; str[i]; i++)
    {
        int temp = (str[i]-'0') - (key[i%mod]-'0');
        if(str[i] == ' ')
            res += ' ';
        else if(temp <= 0)
            res += temp+25+'a';
        else
            res += temp - 1 + 'a';
    }
    std::cout << res;
    return 0;
}