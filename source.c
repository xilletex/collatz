#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(void){
  unsigned long long a = 0;
  int microsecond = 0.1 * 1000000;
  printf("自然数を入力：");
  scanf("%lu", &a);
  unsigned long long i = 1;
    do{
      if(a % 2 == 0){ //偶数なら
          printf("現在の値は%lu、したがって偶数です。\n", a);
        a = a / 2;
        i++;
      }
      else if (a % 2 == 1){ //奇数なら
          printf("現在の値は%lu、したがって奇数です。\n", a);
        a = 3 * a + 1;
        i++;
      }
      else{
        printf("予期せぬエラー\n");
        break;
      }
    }while(a != 1);
    printf("%lu回計算、値が1になりました。\n", i);
}
