#include <stdio.h>
#include <string.h>
#define QUERY "시 분 초를 입력하세요: "
#define RESULT "%02d:%02d:%02d"

// 시간, 분, 초에 해당하는 인자가 정상적인 범위의 숫자인지 체크
// 정상적인 경우 1을 반환
// 정상적이지 않은 경우 0을 반환
int check_time(int hour, int minute, int second);

/**
* 시간에 해당하는 숫자를 문자열로 반환하는 함수
* check_time 함수를 호출해서 시, 분, 초에 해당하는 정수 인자를 체크함
* 인자가 정상 범주의 것이라면 hh:mm:ss 형태로 만들어서 str_time 변수에 저장
* 정상 범주의 인자가 아니라면 -1을 반환
*
* @param str_time 시간에 해당하는 문자열을 돌려받을 변수
* @param size str_time 변수의 크기
* @param hour 시간에 해당하는 정수값
* @param minute 분에 해당하는 정수값
* @param second 초에 해당하는 정수값
* @return 정상범주의 값이면 str_time의 길이, 정상범주가 아니면 -1
*/
int time_to_string(char str_time[], int size, int hour, int minute, int second);
// chech_time 함수를 호출해서 hour, minute, second 함수가 정상범주의 값인지 체크
// 정상범주가 아니면 -1
// 시, 분, 초 각 2자리씩 6자리 + 콜론(:) 2자리 + NULL 문자 1자리, 최소 9자리가 필요함
// 화면에 출력하듯 문자열 변수에 출력하려면 sprintf 함수를 사용함
// sprintf(값을 저장할 문자열 변수, 형식지정자 문자열, 형식지정자에 들어갈 변수들);
// http://www.cplusplus.com/reference/cstdio/sprintf/
// 성공시 str_time에 저장된 문자열의 길이를 반환

int main(void) {
   int hour, minute, second;
   char str_time[256];
   do {
       scanf("%d %d %d", &hour, &minute, &second);
   } while(time_to_string(str_time, 255, hour, minute, second) == -1);
   printf("%s\n", str_time);
   return 0;
}

int check_time(int hour, int minute, int second) {
    if (hour < 0 || hour > 23) return 0;
    if (minute < 0 || minute > 59) return 0;
    if (second < 0 || second > 59) return 0;
    return 1;
}

int time_to_string(char str_time[], int size, int hour, int minute, int second) {
    if (!check_time(hour, minute, second)) return -1;
    return snprintf(str_time, size, RESULT, hour, minute, second);
}

