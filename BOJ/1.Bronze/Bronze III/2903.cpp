#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int d = 2, temp = 3;
    for(int i = 1; i<n; i++)
    {
        temp+=d;
        d*=2;
    }
    std::cout << temp * temp;
    return 0;
}