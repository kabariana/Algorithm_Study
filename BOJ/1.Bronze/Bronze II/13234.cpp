#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string a, op, b;
    std::cin >> a >> op >> b;
    int c, d;

    if(a == "false")
        c = 0;
    else
        c = 1;
    if(b == "false")
        d = 0;
    else
        d = 1;

    if(op == "AND")
        c&&d?std::cout<<"true":std::cout <<"false";
    else
        c||d?std::cout<<"true":std::cout <<"false";
    return 0;
}