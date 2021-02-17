#include <bits/stdc++.h>

std::string bcd(int i)
{
    std::string res = "";
    while(i>0)
    {
        if(i%2==1)
            res+="1";
        else
            res+="0";
        i/=2;
    }
    std::reverse(res.begin(), res.end());
    return res;
}

int main(int argc, char* argv[])
{
    std::string str = "0";
    for(int i=1; i<1000; i++)
        str+=bcd(i);
    
    int n, k;
    std::cin >> n >> k;
    for(int i = 0; i<5; i++)
        std::cout << str[n*i + k-1] << ' ';
    return 0;
}