#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long a, b, result;
    std::cin >> a >> b;

    if(a <= b)
        result = (a+b)*(b-a+1)/2;
    else
        result = (a+b)*(a-b+1)/2;
    std::cout << result;
    return 0;
}