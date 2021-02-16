#include <bits/stdc++.h>

int n;
int result;

void dfs(int a)
{
    if(a>n) return;
    dfs(a*10+7);
    dfs(a*10+4);
    result = std::max(result, a);
}

int main(int argc, char* argv[])
{
    std::cin >> n;
    dfs(0);
    std::cout << result;
}