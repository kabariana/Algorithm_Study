// 정답이 되는 3글자의 영단어를 입력한 후 엔터키를 누른다.
// 정답을 맞추기 위하여 한 글자씩 입력한 후 엔터키를 누른다.
// 5번까지 시도할 수 있다.
// 글자를 입력할 때마다 현재 상태를 화면에 출력한다.
// 정답을 맞추거나, 5번이 경과하면 프로그램은 종료된다.
// Hint : 문자 입력 후에는 getchar()함수를 추가하여 엔터 문자를 버퍼에서 제거해야,
// 다음에 문자 입력이 정상적으로 실행된다.
// 출력할 때 빈 칸이 각 문자의 앞에 오도록 하시오.
#include<stdio.h>

int main() {
    char ans[3];
    char space[3] = { '_','_','_' };
    char temp;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
        scanf("%c", &ans[i]);

    int t = 5;
    while (t--) 
    {
        if (cnt == 3) break;
        getchar();
        scanf("%c", &temp);

        for (int i = 0; i < 3; i++)
        {
            if (temp == ans[i]) 
            {
                space[i] = temp;
                cnt++;
            }
        }
        for (int k = 0; k < 3; k++) {
            printf(" %c", space[k]);
        }
        printf("\n");
    }
    return 0;
}
