#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, o;
    std::cin >> n >> o;
    int max = o/(n-1);
    int min = max;
    if(max*(n-1)==o)
        min--;
    std::cout <<o+min<<' '<<o+max;
    return 0;
}