#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string a, b;

    std::cin >> n >> a >> b;

    if(n%2==0)
    {
        for(int i = 0; a[i]; i++)
        {
            if(a[i]!=b[i])
            {
                std::cout << "Deletion failed\n";
                return 0;
            }
        }
        std::cout << "Deletion succeeded\n";
    }
    else
    {
        for(int i = 0; a[i]; i++)
        {
            if(a[i]==b[i])
            {
                std::cout << "Deletion failed\n";
                return 0;
            }
        }
        std::cout << "Deletion succeeded\n";
    }
    return 0;
}