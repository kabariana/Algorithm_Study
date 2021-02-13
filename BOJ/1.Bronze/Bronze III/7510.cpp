#include <bits/stdc++.h>

bool func(int a, int b, int c)
{
    int A = a*a;
    int B = b*b;
    int C = c*c;
    bool flag = false;
    if(A == B + C || B == A + C || C == A + B)
        flag = true;
    return flag;
}

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << "Scenario #"<< i<< ":\n";
        if(func(a, b, c))
            std::cout << "yes\n";
        else
            std::cout << "no\n";
        std::cout << '\n';
    }
    return 0;
}