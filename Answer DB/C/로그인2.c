#include <stdio.h>
#include <string.h>

typedef struct {
    char id[21];
    char pw[21];
} login;

void new_id(login* array, int* count) {
    if (*count == 5) return;
    login new;
    printf("���ο� ���̵� �Է��ϼ��� : ");
    scanf("%s", new.id);
    printf("���ο� �н����带 �Է��ϼ��� : ");
    scanf("%s", new.pw);
    array[(*count)++] = new;
}

void match_id(const login* array, int count) {
    char id[21], pw[21];
    printf("���̵� �Է��ϼ��� : ");
    scanf("%s", id);
    printf("�н����带 �Է��ϼ��� : ");
    scanf("%s", pw);
    for (int i = 0; i < count; i++) {
        if (strncmp(array[i].id, id, 20) == 0) {
            if (strncmp(array[i].pw, pw, 20) == 0) {
                printf("�α��� ����\n");
                return;
            } else {
                printf("�α��� ����\n");
                return;
            }
        }
    }
    printf("�α��� ����\n");
}

void find_pw(const login* array, int count) {
    char id[21], pw[21];
    printf("�˻��� ���̵� �Է��ϼ��� : ");
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
    printf("�޴��� �����ϼ���. \n");
    printf(" 0. ����, 1. ���, 2. �α���, 3. ��й�ȣ ã��:");
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
