#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string arr[6];
    std::string res = "";
    for(int i = 1; i<=5; i++)
    {
        std::cin >> arr[i];

        if(arr[i].find("FBI") == std::string::npos)
            continue;
        else
            res+=std::to_string(i);
    }
    if(res.size() == 0)
        std::cout << "HE GOT AWAY!";
    else
        for(int i = 0; i<res.size(); i++)
            std::cout << res[i] << ' ';
            
    return 0;
}