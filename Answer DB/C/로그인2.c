#include <stdio.h>
#include <string.h>

typedef struct {
    char id[21];
    char pw[21];
} login;

void new_id(login* array, int* count) {
    if (*count == 5) return;
    login new;
    printf("새로운 아이디를 입력하세요 : ");
    scanf("%s", new.id);
    printf("새로운 패스워드를 입력하세요 : ");
    scanf("%s", new.pw);
    array[(*count)++] = new;
}

void match_id(const login* array, int count) {
    char id[21], pw[21];
    printf("아이디를 입력하세요 : ");
    scanf("%s", id);
    printf("패스워드를 입력하세요 : ");
    scanf("%s", pw);
    for (int i = 0; i < count; i++) {
        if (strncmp(array[i].id, id, 20) == 0) {
            if (strncmp(array[i].pw, pw, 20) == 0) {
                printf("로그인 성공\n");
                return;
            } else {
                printf("로그인 실패\n");
                return;
            }
        }
    }
    printf("로그인 실패\n");
}

void find_pw(const login* array, int count) {
    char id[21], pw[21];
    printf("검색할 아이디를 입력하세요 : ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strncmp(id, array[i].id, 20)) {
            printf("%c", array[i].pw[0]);
            for (int j = 0; j < strlen(array[i].pw) - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int menu() {
    int choice = -1;
    printf("메뉴를 선택하세요. \n");
    printf(" 0. 종료, 1. 등록, 2. 로그인, 3. 비밀번호 찾기:");
    while (choice > 3 || choice < 0) scanf(" %d", &choice);
    return choice;
}

int main() {
    login logins[5];
    int count = 0;
    while(1) {
        int choice = menu();
        if (choice == 1) new_id(logins, &count);
        else if(choice == 2) match_id(logins, count);
        else if(choice == 3) find_pw(logins, count);
        else break;
    }
    return 0;
}
