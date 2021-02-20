// 1837번이랑 동일한 문제
#include <bits/stdc++.h>

bool sieve[1000001];

bool Prime(int num, std::string str)
{
    int sum = 0;
    for(int i = 0; str[i]; i++)
        sum = (sum*10 + (str[i]-'0'))%num;
    if(sum == 0)
        return true;
    return false;
}

int main(int argc, char* argv[])
{
    int K;
    std::string P;
    std::cin >> P >> K;

    bool flag = true;

    int res=0;
    for(int i=2; i<K; i++)
    {
        if(sieve[i])
            continue;
        if(Prime(i, P))
        {
            flag = false;
            res = i;
            break;
        }
        for(int j = 2*i; j < K; j+=i)
            sieve[j] = true;
    }
    if(flag)
        std::cout << "GOOD";
    else
        std::cout << "BAD " << res; 
    return 0;
}