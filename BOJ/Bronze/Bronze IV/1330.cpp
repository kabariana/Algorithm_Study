#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;

    if(a > b)
        std::cout << ">";
    else if(a < b)
        std::cout << "<";
    else
        std::cout << "==";
    return 0;
}