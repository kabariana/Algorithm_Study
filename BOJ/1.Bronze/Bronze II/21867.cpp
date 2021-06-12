#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    int cnt = 0;
    for(int i = 0; i<str.size(); i++)
        if(str[i] == 'J' || str[i] == 'A' || str[i] == 'V')
            cnt++;

    if(n-cnt == 0)
        std::cout << "nojava\n";
    else{
        for(int i = 0; i<n; i++){
            if(str[i] == 'J' || str[i] == 'A' || str[i] == 'V')
                continue;
            else
                std::cout << str[i];
        }
    }
    return 0;
}