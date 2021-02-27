// 팩토리얼의 1의 자리의 숫자를 구하는 문제
// 5를 기점으로 더 큰 수는 일의 자리의 수가 다 0
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    int arr[5] = {1, 1, 2, 6, 4};
    std::cin >> n;

    if(n<5)
        std::cout << arr[n];
    else
        std::cout << "0";
    return 0;
}