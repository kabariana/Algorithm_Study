#include <bits/stdc++.h>

bool check[2000000];

// 에라토스테네스의 체
void prime()
{
    int a = std::sqrt(2000000);
    for(int i = 2; i<=a; i++)
    {
        if(!check[i])
        {
            for(int j = i*2; j <= 2000000; j+=i)
                check[j] = true;
        }
    }
}

bool isPalindrome(int n)
{
    std::string str = std::to_string(n);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] != str[str.size()-1-i])
            return false;
    }
    return true;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    prime();
    std::vector<int> v;
    for(int i = 2; i<=2000000; i++)
        if(!check[i] && isPalindrome(i))
            v.push_back(i);

    std::cout << *std::lower_bound(v.begin(), v.end(), n);
    return 0;
}