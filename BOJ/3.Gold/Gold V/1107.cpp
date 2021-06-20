#include <bits/stdc++.h>
#define MAX 1000000

std::vector<bool> broken(10, false);

int chk(int n)
{
    if(n == 0)
    {
        if(broken[0])
            return 0;
        else
            return 1;
    }
    int length = 0;
    while(n > 0)
    {
        if(broken[n%10])
            return 0;
        n/=10;
        length++;
    }
    return length;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int button;
        std::cin >> button;
        broken[button] = true;
    }

    int result = std::abs(n - 100);
    
    for(int i = 0; i<= MAX; i++)
    {
        int tmp = i;
        int getLen = chk(tmp);
        if(getLen > 0)
        {
            int pressed = std::abs(tmp - n);
            if(result > pressed + getLen)
                result = pressed + getLen;
        }
    }
    std::cout << result <<'\n';
    return 0;
}