#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h, m, t, cnt = 0;
    scanf("%d:%d", &h, &m);

    t = 3600*h + 60*m;
    while(cnt != 7200) // 2시간
    {
        cnt++;
        if(7*3600<=t&&t<=10*3600 || 15*3600<=t&&t<=19*3600)
            t+=2;
        else
            t++;
        t%=3600*24;
    }
    printf("%02d:%02d", t/3600, t%3600/60);
    return 0;
}