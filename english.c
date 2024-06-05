#include <stdio.h>
int main(void){
  int a, b, c;
  int abc;
  printf("3자리 정수를 입력하시오 : ");
  scanf("%d", &abc);
  c = abc % 10;
  b = (abc / 10) % 10;
  a = ((abc / 100) % 10) % 10;
  printf("%d", c);
  printf("%d", b);
  printf("%d", a);
}
