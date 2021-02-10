#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h, m, s, ft, st, tmp; 
    scanf("%d:%d:%d",&h, &m, &s);

    ft = 3600 * h + 60 * m + s;
    scanf("%d:%d:%d",&h, &m, &s);
    st = 3600 * h + 60 * m + s;

    if(ft > st)
        st += 24*3600;
    
    tmp = st - ft;
    h = tmp/3600;
    tmp%=3600;
    m = tmp/60;
    s = tmp%60;

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}