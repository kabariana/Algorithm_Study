#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str, res;
    std::getline(std::cin, str);

    int n = 0;
    for(auto ch : str){
        if(!res.empty() && ch == res.back()){
            n++;
        }
        else
            n = 0;

        if(!strchr("bcdfghjklmnpqrstvwxz", ch) || n < 2)
            res += ch;
    }
    std::cout << res;
    return 0;   
}