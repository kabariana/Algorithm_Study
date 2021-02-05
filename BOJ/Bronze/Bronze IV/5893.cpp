#include <bits/stdc++.h>

std::string stringSum(std::string _str)
{
    int num;
    int carry = 0;
    std::string tmp, res;
    tmp = _str;

    _str.append("0000");
    
    std::reverse(tmp.begin(), tmp.end());
    std::reverse(_str.begin(), _str.end());

    while(tmp.length() < _str.length())
        tmp += '0';
    while(tmp.length() > _str.length())
        _str += '0';

    for(int i = 0; i < tmp.length(); i++)
    {
        num = (tmp[i] - '0' + _str[i] - '0' + carry)%2;
        res += std::to_string(num);
        carry = (tmp[i] - '0' + _str[i]-'0' + carry)/2;
    }
    if(carry!= 0)
        res += std::to_string(carry);

    std::reverse(res.begin(), res.end());
    return res;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;

    std::cin >> str;

    std::cout << stringSum(str);
    return 0;
}
