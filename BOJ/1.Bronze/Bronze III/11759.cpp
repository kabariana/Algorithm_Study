#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int s, v1, v2;
    std::cin >> s >> v1 >> v2;
    int tmp = (s/v1)*v1;
    while(tmp>=0&&(s-tmp)%v2!=0)
        tmp-=v1;
    if(tmp>=0)
        std::cout<<tmp/v1<<' '<<(s-tmp)/v2;
    else if(s%v2==0)
        std::cout<<"0 "<<s/v2;
    else
        std::cout<<"Impossible";
    return 0;
}