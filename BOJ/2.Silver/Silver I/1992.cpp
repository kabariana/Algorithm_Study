// 분할 정복
#include <bits/stdc++.h>

int arr[64][64];

int func(int n, int y, int x)
{
    if(n == 1)
    {
        std::cout << arr[y][x];
        return 0;
    }

    int found = arr[y][x];
    int divide = n/2;
    for(int i = y; i<y + n; i++)
    {
        for(int j = x; j<x + n; j++)
        {
            if(found != arr[i][j])
            {
                std::cout << "(";
                func(divide, y, x);
                func(divide, y, x + divide);
                func(divide, y + divide, x);
                func(divide, y + divide, x + divide);
                std::cout << ")";
                return 0;
            }
        }
    }
    std::cout << found;
    return 0;
}

int main(int argc, char* argv[])
{   
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        for(int j = 0; j < n; j++)
            arr[i][j] = str[j] - '0';
    }
    func(n, 0, 0);
    return 0;
}