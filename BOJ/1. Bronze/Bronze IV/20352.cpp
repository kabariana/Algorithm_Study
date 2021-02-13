// 입력으로 주어지는 수는 원의 넓이이고
// 이를 바탕으로 원의 둘레의 길이를 구하여 출력하라는 문제.
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

int main()
{
    double n, r;
    std::cin >> n;
    
    r = std::sqrt(n/M_PI);
    printf("%.10lf", r * 2 * M_PI);
    return 0;
}