#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, i = 1;
    std::cin >> n;

    while(true)
    {
        if(i+i*i == n-1)
            break;
        i++;
    }
    std::cout << i;
    return 0;
}