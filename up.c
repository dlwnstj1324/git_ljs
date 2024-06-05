#include <stdio.h>
int main(void){
  int i=0;
  int num[10];
  for(i=0; i<10; i++){
  printf("수 : ");
  scanf("%d", &num[i]);
  }
  int max = num[0];
  int min = num[0];
  for(i=0; i<10; i++){
    if(num[i] > max){
      max = num[i];
    }
    if(num[i] < min){
      min = num[i];
    }
  }
  printf("최대 : %d 최소 : %d", max, min);
}
