#include <bits/stdc++.h>

int getSum(std::string str)
{
    int ret = 0;
    for(int i = 0; str[i]; i++)
        ret += str[i]-'0';
    return ret;
}

int main(int argc, char* argv[])
{
    while(true)
    {
        int n;
        std::cin >> n;

        if(n == 0)
            break;

        int tmp = getSum(std::to_string(n));
        int ans = 0;
        for(int i = 11; i<=100 && !ans; i++)
            if(tmp == getSum(std::to_string(n*i)))
                ans = i;

        std::cout << ans <<'\n';
    }
    return 0;
}