#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, val = 1;
    std::cin >> n;

    bool flag = true;
    for(int i = 0; i<n; i++)
    {
        std::string str;
        std::cin >> str;
        if(str!="mumble")
        {
            if(val != std::stoi(str.c_str()))
            {
                flag = false;
                break;
            }
        }
        val++;
    }
    if(flag)
        std::cout << "makes sense";
    else
        std::cout << "something is fishy";
    return 0;
}