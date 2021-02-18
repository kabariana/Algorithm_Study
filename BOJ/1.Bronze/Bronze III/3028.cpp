#include <bits/stdc++.h>

int arr[3][3] = {
    1, 0, 2,
    0, 2, 1,
    2, 1, 0
};

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int ans = 0;
    for(int i = 0; str[i]; i++)
        ans = arr[str[i]-'A'][ans];
    std::cout << ans+1;
}