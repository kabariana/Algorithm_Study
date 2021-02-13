#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if(c <= b)
        std::cout << "-1";
    else
        std::cout << a/(c-b) + 1;
    return 0;
}