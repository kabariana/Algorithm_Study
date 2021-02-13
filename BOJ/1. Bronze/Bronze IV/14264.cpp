// 간단한 삼각비 문제 sin = sqrt(3)/2
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double n;
    std::cin >> n;

    printf("%.15f", n*n*std::sqrt(3)/2/2);
    return 0;  
}