#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string a, b;

    std::cin >> n >> a >> b;

    int cnt = 0;
    for(int i = 0; a[i]; i++)
        if(a[i] == b[i])
            cnt++;
    
    int result;
    if(n < cnt)
        result = n + a.size() - cnt;
    else
        result = a.size() - n + cnt;
    std::cout << result;
    return 0;
}