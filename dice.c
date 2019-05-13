#include<stdio.h>
#include<stdlib.h>//for rand()-->alike random number
#include<time.h>// for srand(time(NULL))-->random number
#include<windows.h>//for time delay
int main (){
  int i=0;
  int j=0;
  int plus=0;
  srand(time(NULL));
  while (1){
    plus=0;
    j++;
    printf("%d times\n",j);
    i = rand()%6+1;
    printf("Result1: %d\n",i);
    plus +=i;
    i = rand()%6+1;
    printf("Result2: %d\n",i);
    plus +=i;
    printf("Main Result: %d\n\n",plus);

    Sleep(3000);//3000/1000sec delay
  }
  return 0;
}
