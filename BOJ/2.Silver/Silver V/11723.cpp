#include <bits/stdc++.h>

bool visited[21];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int x;
        std::string str;
        std::cin >> str;

        if(str == "add")
        {
            std::cin >> x;
            visited[x] = true;
        }
        else if(str == "remove")
        {
            std::cin >> x;
            visited[x] = false;
        }
        else if(str == "check")
        {
            std::cin >> x;
            if(visited[x])
                std::cout << 1 << '\n';
            else
                std::cout << 0 << '\n';
        }
        else if(str == "toggle")
        {
            std::cin >> x;
            
            if(visited[x])
                visited[x] = false;
            else
                visited[x] = true;
        }
        else if(str == "all")
            memset(visited, true, sizeof(visited));
        else
            memset(visited, false, sizeof(visited));
    }
    return 0;
}