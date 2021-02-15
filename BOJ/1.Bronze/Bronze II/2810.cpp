#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    int n, res = 1;

    std::cin >> n >> str;

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(str[i] =='L')
        {
            if(cnt%2 == 1)
            {
                cnt++;
                continue;
            }
            else
            {
                cnt++;
                res++;
            }
        }
        else if(str[i] == 'S')
            res++;
    }
    if(res > n)
        res = n;
    std::cout << res;


}