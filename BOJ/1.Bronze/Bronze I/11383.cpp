#include <bits/stdc++.h>
#define MAX_SIZE 10

std::string str[MAX_SIZE];

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        std::string s;
        std::cin >> s;

        for(int j=0; s[j]; j++)
            for(int k=0; k<2; k++)
                str[i]+=s[j];
    }

    bool check = true;
    for(int i=0; i<n; i++)
    {
        std::string temp;
        std::cin >> temp;

        if(str[i] != temp)
        {
            check = false;
            break;
        }
    }
    if(check)
        std::cout << "Eyfa";
    else
        std::cout << "Not Eyfa";
}