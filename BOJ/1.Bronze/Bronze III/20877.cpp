#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        ans+=((num>7)?7:num) - ((i%2==0)?2:3);
    }
    std::cout << ans;
    return 0;
}