#include <bits/stdc++.h>

bool compare(const std::string& a, const std::string& b)
{
    if(a.size() != b.size())
        return a.size() < b.size();  
    else if(a.size() == b.size())
    {
        int sum_a = 0, sum_b = 0;  
        for(int i = 0; a[i]; i++)
            if(std::isdigit(a[i]))
                sum_a+=(a[i]-'0');
        
        for(int i = 0; b[i]; i++)
            if(std::isdigit(b[i]))
                sum_b+=(b[i]-'0');

        if(sum_a == sum_b)
        {
            if(a.compare(b) < 0)
                return true;
            return false;
        }
        else
            return sum_a < sum_b;
    }
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> v;
    while(n--)
    {
        std::string str;
        std::cin >> str;
        v.push_back(str);
    }
    std::sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] << '\n';
    return 0;
}