#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, k, sum = 0;
    std::cin >> n >> k;

    while(k--)
    {
        int num;
        std::cin >> num;

        if(num%2 == 1)
            sum+=num/2 + 1;
        else
            sum+=num/2;
    }
    if(sum >= n)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}