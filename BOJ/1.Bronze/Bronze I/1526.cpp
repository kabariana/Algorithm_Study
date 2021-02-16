#include <bits/stdc++.h>

int n;
int result;

void func(int a)
{
    if(a>n) return;
    func(a*10+7);
    func(a*10+4);
    result = std::max(result, a);
}

int main(int argc, char* argv[])
{
    std::cin >> n;
    func(0);
    std::cout << result;
    return 0;
}