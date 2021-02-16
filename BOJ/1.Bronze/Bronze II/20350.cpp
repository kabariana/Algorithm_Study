//C++로 풀어서 그런가... 난이도가 B2가 아닌 것 같은... ㅋㅋ

#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str, tmp;
    std::cin >> str;

    tmp = str;
    
    for(int i = 0; str[i]; i++)
        str[i] = tmp[(i+4)%str.size()];

    tmp = "";
    for(int i = 0; str[i]; i++)
    {
        if(std::isalpha(str[i]))
            tmp+=std::to_string(str[i]-'A' + 10);
        else
            tmp+=str[i];
    }
    int sum = 0;
    for(int i = tmp.size()-1, j = 1; i>=0; i--, j=(10*j)%97)
    {
        sum+=(tmp[i]-'0')*j;
        sum%=97;
    }
    if(sum == 1)
        std::cout << "correct";
    else
        std::cout << "incorrect";
    return 0;
}