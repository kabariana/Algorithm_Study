#include <bits/stdc++.h>

int r(int a, int b)
{
    if(b>=a/2)
        return a;
    else
        return 0;
}

int main(int argc, char* argv[])
{
    int n;
    int temp = 10;

    std::cin >> n;
    while(n>temp)
    {
        n = (n-n%temp) + r(temp, n%temp);
        temp*=10; 
    }
    std::cout << n;
    return 0;
}