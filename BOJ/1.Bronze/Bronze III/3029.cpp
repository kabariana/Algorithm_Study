#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if(s2>=s1)
        s3=s2-s1;
    else
    {
        s3=60+s2-s1;
        m2--;
    }
    
    if(m2>=m1)
        m3=m2-m1;
    else
    {
        m3=60+m2-m1;
        h2--;
    }

    if(h2>=h1)
        h3=h2-h1;
    else
        h3=24+h2-h1;

    if(s3==0&&m3==0&&h3==0)
        h3=24;

    printf("%02d:%02d:%02d", h3, m3, s3);
    return 0;
}