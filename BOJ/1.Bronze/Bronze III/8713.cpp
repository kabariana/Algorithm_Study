#include <bits/stdc++.h>

std::string convert(int n)
{
    if(n<0)
        return "("+std::to_string(n)+")";
    else
        return std::to_string(n);
}

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;

    if(a == 0 || b == 0 || a+b==a*b || a-b==a*b)
        std::cout << "NIE";
    else
    {
        int max = std::max({a+b, a-b, a*b});
        if(max == a+b)
            std::cout<<convert(a)<<'+'<<convert(b)<<'='<<convert(a+b);
        if(max == a-b)
            std::cout<<convert(a)<<'-'<<convert(b)<<'='<<convert(a-b);
        if(max == a*b)
            std::cout<<convert(a)<<'*'<<convert(b)<<'='<<convert(a*b);
    }
    return 0;
}