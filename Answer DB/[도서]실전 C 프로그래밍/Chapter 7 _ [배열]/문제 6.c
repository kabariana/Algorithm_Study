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
