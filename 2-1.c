#include <stdio.h>
#define MAX_SIZE 3
int stack[MAX_SIZE];
int top = -1;
void push(int value) { stack[++top] = value; }
int pop() { return (stack[top--]); }
int main() {
  push(1);
  push(2);
  push(3);
  int poppedValue1 = pop();
  int poppedValue2 = pop();
  int poppedValue3 = pop();
  printf("팝한 값:%d, %d, %d\n", poppedValue1, poppedValue2, poppedValue3);
}