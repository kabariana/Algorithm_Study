#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int voter = 9, cnt = 0;

    while(voter--)
    {
        std::string str;
        std::cin >>str;

        if(str == "Tiger")
            cnt++;
    }
    std::cout << (cnt >= 5 ? "Tiger\n" : "Lion\n");
    return 0;
}