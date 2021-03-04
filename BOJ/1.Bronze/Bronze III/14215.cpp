#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> v(3);
    for(int i = 0; i<3; i++)
        std::cin >>v[i];
    
    std::sort(v.begin(), v.end());
    int tmp = v[0] + v[1];
    int con = std::min(tmp-1, v[2]);
    std::cout << tmp + con;
    return 0;
}