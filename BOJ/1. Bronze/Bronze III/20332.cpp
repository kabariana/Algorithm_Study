#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, sum = 0;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        sum+=num;
    }
    if(sum%3==0)
        std::cout << "yes";
    else
        std::cout << "no";
    return 0;
}