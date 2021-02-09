#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    if( n%400== 0 || (n%4==0 && n%100!= 0))
        std::cout << "1";
    else
        std::cout << "0";
    return 0;
}