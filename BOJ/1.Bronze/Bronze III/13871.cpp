#include <bits/stdc++.h>

int arr[101];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c, res = 1;
    arr[1]++;
    std::cin >> a >> b >> c;

    for(int i = 0; i<b; i++)
    {
        int num;
        std::cin >> num;
        if(num == 1)
            res++;
        else if(num == -1)
            res--;
        if(res == 0)
            res = a;
        else if(res == a+1)
            res = 1;
        arr[res]++;
    }
    std::cout << arr[c];
    return 0;
}