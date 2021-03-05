#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    if(n<3)
        std::cout << "1\n";
    else
        std::cout << n-2 << '\n';
    return 0;
}