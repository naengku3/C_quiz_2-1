# C_stack
자료구조 : 데이터의 구조

기초적인 자료구조 목록
1. 변수형 (int , float, double....)
2. 배열 (v[100]...) 
3. 구조체 (struct)
4. 공용체 (union)
5. 열거형 (enum)
6. 트리 (tree) : 루트에서 시작해서 뿌리를 내려간다. 마지막에는 NULL('\0)을 붙이기. 검색에 이용
7. 리스트 (list) : 순서를 가지고 일렬로 나열한 원소들의 모임. 마지막에는 NULL('\0)을 붙이기.
8. 스택 (Stack) : 후입선출 (LIFO) 원칙에 따라 데이터를 저장하는 자료구조. 데이터를 담고 꺼내고 살펴볼 수 있다.

```c
//C언어로 스택의 구현
#include <stdio.h>
#define MAX_SIZE 3 // 통의 공간
int stack[MAX_SIZE]; // 통 배열로 구현
int top = -1; // 제일 바닥 -1부터 시작
void push(int value) { stack[++top] = value; } //push를 통해 top을 1 올려주고(스택포인터 지정) int형 데이터를 통에 저장
int pop() { return (stack[top--]); } //pop를 통해 int형 데이터를 통에서 빼내고 top을 1 내려주기(스택포인터 지정)
int main() {
  push(1); // 1, 2, 3 차례대로 집어넣기
  push(2);
  push(3);
  int poppedValue1 = pop(); // 3, 2, 1 차례대로 꺼내기
  int poppedValue2 = pop();
  int poppedValue3 = pop();
  printf("팝한 값:%d, %d, %d\n", poppedValue1, poppedValue2, poppedValue3);
}
```

소감 : 기초적인 자료구조 목록을 배워보면서 기존에 배웠던 것들 5개를 기초적인 자료구조 목록이라고 인식할 수 있었고, 나머지 트리, 리스트, 스택을 배움으로서 자료구조가 어떻게 이루어져 있는지 알 수 있는 기회였습니다.
       그리고 그 자료구조중 하나인 스택(stack)을 직접 심플한 버전이지만 구현해 봄으로서 스택이라는 자료구조에 대해 이해 할 수 있었고, 원리를 직접 머리로 구상해 봄으로서 더 응용을 하던등의 깊게 들어갈 수 있을 것 같습니다.
       감사합니다.
