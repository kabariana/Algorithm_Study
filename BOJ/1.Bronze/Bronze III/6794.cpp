#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    if(n<=5)
        std::cout << n/2 + 1;
    else
        std::cout << n/2+1-(n-5);
    return 0;
}