#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char q1 = 'R';
    char q2 = 'G';
    char q3 = 'B';
    char q4 = 'Y';

    puts("【色当てゲーム】");
    puts("ゲームをはじめてください。");
    puts("コンピュータが問題を出しました。");
    puts("予想を入力してください。");

    // コンソールからの取得
    char t1 = getchar();
    char t2 = getchar();
    char t3 = getchar();
    char t4 = getchar();

    // コンソールへの表示
    putchar(t1);
    putchar(t2);
    putchar(t3);
    putchar(t4);

    int matched = 0;
    //条件分岐
    if(q1 == t1) {
        matched ++;
    }
    if(q2 == t2) {
        matched ++;
    }
    if(q3 == t3) {
        matched ++;
    }
    if(q4 == t4) {
        matched ++;
    }

    puts("結果");
    printf("%d コ合っています。 \n", matched);
    // 記号定数→enum
    return EXIT_SUCCESS;
}