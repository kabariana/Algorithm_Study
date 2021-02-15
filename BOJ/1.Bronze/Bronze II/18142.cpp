#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string res;
    bool flag = false;
    for(int i = 0; i<3; i++)
    {
        std::string str;
        std::cin >> str;
        if(str != "bubble" && str != "tapioka")
        {
            if(flag)
                res += " ";
            res += str;
            flag = true;
        }
    }
    if(res == "") 
        res = "nothing";
    std::cout << res;
    return 0;
}