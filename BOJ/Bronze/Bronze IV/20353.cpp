// 이전 문제와 다르게 주어지는 입력은 정사각형의 넓이
// 그 둘레의 길이를 출력하는 문제.
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double a;
    std::cin >> a;

    printf("%.8lf", 4*std::sqrt(a));
    return 0;
}