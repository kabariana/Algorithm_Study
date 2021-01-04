using namespace std;

long long solution(int w,int h) {
    int gcd;
    long long sum = (long long)w * (long long)h;
    
    for(int i = (w>h)?h:w; i>0; i--)
    {
        if((w%i)==0 && (h%i)==0)
        {
            gcd = i;
            break;
        }
    }
    long long answer = sum-gcd*((w/gcd) + (h/gcd)-1);
    return answer;
}
