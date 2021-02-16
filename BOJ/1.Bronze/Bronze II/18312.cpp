#include <bits/stdc++.h>

std::string convert(int n)
{
    std::string res = "";
    int h = n/3600;

    if(h < 10)
        res +="0";
    res+=std::to_string(h);
    
    n%=3600;

    int m = n/60;
    if(m < 10)
        res += "0";
    res += std::to_string(m);
    
    n %= 60;
    
    if(n<10)
        res += "0";
    res += std::to_string(n);

    return res;
}


int main(int argc, char* argv[])
{
    int n, k, max, cnt = 0;
    std::cin >> n >> k;

    max = n*60*60 + 59*60 + 59; // 최대 second
    std::string key = std::to_string(k);

    for(int i = 0; i<=max; i++)
    {
        std::string temp = convert(i);
        if(temp.find(key)!=std::string::npos)
            cnt++;
    }
    std::cout << cnt;
    return 0;
}