#include <stdio.h>
#include <string.h>

#define MAX_USER 5
#define MAX_ID_BUF 16
#define MAX_PW_BUF 32

#define QUERY_ID "ID를 입력하세요: "
#define QUERY_PW "PW를 입력하세요: "

#define ERR_NO_ID "해당 id가 없습니다.\n\n"
#define ERR_WRONG_PW "패스워드가 틀렸습니다.\n\n"
#define RES_SUCCESS "\n로그인 성공!\n"
#define RES_FAIL "로그인 실패\n"

// 아이디에 해당하는 패스워드는 동일한 인덱스에 저장되어 있음
// 예를 들어 arr_id[0]에 해당하는 패스워드는 arr_pw[0]이다.
int main(void)
{
    int success = 0;
    // 아이디 목록
    char arr_id[MAX_USER][MAX_ID_BUF] = {
        "rapmonster", "minyoonki", "kimsukjin", "parkjimin", "jungkook"};
    // 패스워드 목록
    char arr_pw[MAX_USER][MAX_PW_BUF] = {
        "BTS4ever!!", "ILoveArmy^^", "DNA!awesome", "@BestOfMe@", "~SpringDay~"};

    char id[MAX_ID_BUF], password[MAX_PW_BUF];
    // 3번 반복하는 동안 아이디와 패스워드를 체크함
    for (int i = 0; i < 3; i++) {
        // 사용자로부터 아이디와 패스워드를 받음
        printf(QUERY_ID);
        scanf("%s", id);
        printf(QUERY_PW);
        scanf("%s", password);
        // 아이디 목록에 아이디가 존재하는지 검사
        int j = 0;
        for (; j < MAX_USER; j++) {
            if (strcmp(id, arr_id[j]) == 0) break;
        }
        // 만약 아이디가 존재한다면 그에 해당하는 패스워드 검사 (동일 인덱스)
        if (j < MAX_USER) {
            // 패스워드가 맞으면 로그인 성공 메시지 출력
            if (strcmp(password, arr_pw[j]) == 0) {
                printf(RES_SUCCESS);
                success = 1;
                break;
            } else {
                // 패스워드가 틀리면 오류 메시지 출력
                success = 0;
                printf(ERR_WRONG_PW);
            }
            
        } else {
            // 아이디가 존재하지 않으면 오류 메시지 출력
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
