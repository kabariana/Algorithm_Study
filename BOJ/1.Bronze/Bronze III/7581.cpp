#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int l, w, h, v;
        std::cin >> l >> w >> h >> v;

        if(l == 0 && w == 0 && h == 0 && v==0)
            break;
        
        if(l==0)
            std::cout <<v/(w*h)<<' '<<w<<' '<<h<<' '<<v<<'\n';
        else if(w==0)
            std::cout <<l<<' '<<v/(l*h)<<' '<<h<<' '<<v<<'\n';
        else if(h==0)
            std::cout <<l<<' '<<w<<' '<<v/(l*w)<<' '<<v<<'\n';
        else
            std::cout <<l<<' '<<w<<' '<<h<<' '<<l*w*h<<'\n';
    }
    return 0;
}