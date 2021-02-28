#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    int arr[3] = {1, 0, 1};
    std::cin >> n;

    while(n--)
    {
        int num;
        std::cin >> num;
        if(num == 1)
            std::cout << "A\n";
        else
            std::cout << char('A'+(num/3 + arr[num%3])%4) << '\n';
    }
    return 0;
}