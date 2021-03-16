#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, tmp = 2;
    std::cin >> n;
    while(true)
    {
        if(n%tmp)
            break;
        tmp++;
    }
    std::cout << tmp << " " << n-1;
    return 0;
}