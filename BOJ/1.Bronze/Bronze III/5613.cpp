#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll num;
    char oper;
    std::cin >> num;

    ll res = num;

    while(true)
    {
        std::cin >> oper;
        if(oper == '=')
        {
            std::cout << res;
            break;
        }
        std::cin >> num;
        if(oper == '+')
            res += num;
        else if(oper == '-')
            res -= num;
        else if(oper == '*')
            res *= num;
        else if(oper == '/')
            res /= num;
    }
    return 0;
}