#include <stdio.h>
#include <string.h>

#define MAX_USER 5
#define MAX_ID_BUF 16
#define MAX_PW_BUF 32

#define QUERY_ID "ID�� �Է��ϼ���: "
#define QUERY_PW "PW�� �Է��ϼ���: "

#define ERR_NO_ID "�ش� id�� �����ϴ�.\n\n"
#define ERR_WRONG_PW "�н����尡 Ʋ�Ƚ��ϴ�.\n\n"
#define RES_SUCCESS "\n�α��� ����!\n"
#define RES_FAIL "�α��� ����\n"

// ���̵� �ش��ϴ� �н������ ������ �ε����� ����Ǿ� ����
// ���� ��� arr_id[0]�� �ش��ϴ� �н������ arr_pw[0]�̴�.
int main(void)
{
    int success = 0;
    // ���̵� ���
    char arr_id[MAX_USER][MAX_ID_BUF] = {
        "rapmonster", "minyoonki", "kimsukjin", "parkjimin", "jungkook"};
    // �н����� ���
    char arr_pw[MAX_USER][MAX_PW_BUF] = {
        "BTS4ever!!", "ILoveArmy^^", "DNA!awesome", "@BestOfMe@", "~SpringDay~"};

    char id[MAX_ID_BUF], password[MAX_PW_BUF];
    // 3�� �ݺ��ϴ� ���� ���̵�� �н����带 üũ��
    for (int i = 0; i < 3; i++) {
        // ����ڷκ��� ���̵�� �н����带 ����
        printf(QUERY_ID);
        scanf("%s", id);
        printf(QUERY_PW);
        scanf("%s", password);
        // ���̵� ��Ͽ� ���̵� �����ϴ��� �˻�
        int j = 0;
        for (; j < MAX_USER; j++) {
            if (strcmp(id, arr_id[j]) == 0) break;
        }
        // ���� ���̵� �����Ѵٸ� �׿� �ش��ϴ� �н����� �˻� (���� �ε���)
        if (j < MAX_USER) {
            // �н����尡 ������ �α��� ���� �޽��� ���
            if (strcmp(password, arr_pw[j]) == 0) {
                printf(RES_SUCCESS);
                success = 1;
                break;
            } else {
                // �н����尡 Ʋ���� ���� �޽��� ���
                success = 0;
                printf(ERR_WRONG_PW);
            }
            
        } else {
            // ���̵� �������� ������ ���� �޽��� ���
            success = 0;
            printf(ERR_NO_ID);
            continue;
        }
    }
    if (success == 0) {
        printf(RES_FAIL);
    }
    return 0;
}
