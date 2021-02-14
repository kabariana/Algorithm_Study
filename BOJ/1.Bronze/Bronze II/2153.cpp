#include <bits/stdc++.h>

bool check[1050];
int main(int argc, char* argv[])
{
    // 에라토스테네스의 체
    for(int i = 2; i<1050; i++)
    {
        if(check[i] == false)
        {
            for(int j = 2*i; j<1050; j+=i)
                check[j] = true;
        }
    }

    std::string str;
    std::cin >> str;

    int sum = 0;    
    for(int i = 0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            sum+=str[i]-'a'+1;
        else
            sum+=str[i]-'A'+27;
    }

    if(check[sum] == false)
        std::cout << "It is a prime word.";
    else
        std::cout << "It is not a prime word.";
    return 0;
}