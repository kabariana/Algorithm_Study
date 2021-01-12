#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define QUERY "문자열을 입력하세요: "
#define RESULT "공백 문자 제거후: %s\n"

void remove_space(char str[]);

int main(){
    char str[255];
    printf(QUERY);
    scanf("%[^\n]%*c", str);
    remove_space(str);
    printf(RESULT, str);
    return 0;
}

void remove_space(char str[]) {
    int space_cnt = 0;
    int index = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])) str[index++] = str[i];
    }
    str[index] = 0;
}
