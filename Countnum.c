#include<stdio.h>
int main(){
  int num,count=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  while(num)
  {
      num=num/10;
      count++;
  }
  printf("%d",count);
  return 0;
}
