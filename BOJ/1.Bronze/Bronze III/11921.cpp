#include <cstdio>
typedef long long ll;

const int MAX = 1<<20;
char arr[MAX];
int a;

inline char readC()
{
    if(a == MAX)
        fread(arr, 1, MAX, stdin), a = 0;
    return arr[a++];
}

inline void rInt(int &n)
{
    int tmp;
    n = readC()&15;
    while((tmp = readC())!='\n')
        n = n*10 + (tmp&15);
}

int main(int argc, char* argv[])
{
    ll sum = 0;
    int n, t;
    rInt(n);
    printf("%d\n", n);
    for(int i = 0; i<n; i++)
    {
        rInt(t);
        sum+=t;
    }
    printf("%lld", sum);
    return 0;
}