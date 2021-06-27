#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int x = 0, y;
    bool flag = false;

    for(int i = 0; i<n; i++)
    {
        std::cin >> y;
        if(x < y && !flag)
        {
            goto SAME;
        }
        if(x > y && flag)
        {
            goto SAME;
        }
        if(x > y && !flag)
        {
            flag = true;
            goto SAME;
        }
        printf("NO\n");
        return 0;
        SAME:
        x = y;
    }
    std::cout << "YES\n";
    return 0;
}