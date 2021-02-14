#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    while(n--)
    {
        long long int a, b, result, tmp;
        char c;

        scanf("%lld %c %lld = %lld", &a, &c, &b, &result);
        switch(c)
        {
        case '+':
            tmp = a+b;
            break;
        case '-':
            tmp = a-b;
            break;
        case '*':
            tmp = a*b;
            break;
        case '/':
            tmp = a/b;
            break;
        }
        if(result == tmp)
            std::cout << "correct\n";
        else
            std::cout << "wrong answer\n";
    }
    return 0;
}