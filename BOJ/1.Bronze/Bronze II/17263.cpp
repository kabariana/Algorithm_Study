#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int max = -1;
    while(n--)
    {
        int num;
        std::cin >> num;
        if(num>max)
            max = num;
    }
    std::cout << max;
    return 0;
}