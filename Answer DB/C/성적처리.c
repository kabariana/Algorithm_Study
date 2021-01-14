#include <stdio.h>

int main(){
    int scores[4][3];
    int total[4] = {0,};
    float average[4] = {0, };
    float sub_aver[3] = {0, };
    for (int i = 0; i < 4; i++) {
        int math, eng, kor;
        printf("%d번 학생의 국어 점수를 입력하세요:", i + 1);
        scanf(" %d", &kor);
        scores[i][0] = kor;
        total[i] += kor;
        sub_aver[0] += kor / 4.0;
        printf("%d번 학생의 영어 점수를 입력하세요:", i + 1);
        scanf(" %d", &eng);
        scores[i][1] = eng;
        total[i] += eng;
        sub_aver[1] += eng / 4.0;
        printf("%d번 학생의 수학 점수를 입력하세요:", i + 1);
        scanf(" %d", &math);
        scores[i][2] = math;
        total[i] += math;
        sub_aver[2] += math / 4.0;
        average[i] = total[i] / 3.0;
        average[i] += 0.005;
    }
    sub_aver[0] += 0.005;
    sub_aver[1] += 0.005;
    sub_aver[2] += 0.005;

    printf("번 호\t국 어\t영 어\t수 학\t총 점\t평 균\n");
    printf("========================================================\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%.2f\n", i + 1,scores[i][0], scores[i][1], scores[i][2], total[i], average[i]);
    }
    printf("========================================================\n");
    printf("과 목 평 균\t\t%.2f\t%.2f\t%.2f\n", sub_aver[0], sub_aver[1], sub_aver[2]);
    return 0;
}
