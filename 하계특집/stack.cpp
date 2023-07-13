#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

typedef struct {
	int items[MAX_SIZE];
	int top;
} Stack;

void initialize(Stack* stack){
	stack->top = -1;
}

bool isEmpty(Stack* stack) {
	return (stack->top == -1);
}

bool isFull(Stack* stack) {
	return (stack->top == MAX_SIZE - 1);
}

void push(Stack* stack, int value) {
	if (isFull(stack)) {
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	stack->top++;
	stack->items[stack->top] = value;
}

int pop(Stack* stack) {
	if (isEmpty(stack)) {
		printf("������ ������ϴ�.\n");
		return -1;
	}
	int poppedItem = stack->items[stack->top];
	stack->top--;

	return poppedItem;
}

int peek(Stack* stack) {
	if (isEmpty(stack)) {
		printf("������ ������ϴ�.\n");
		return -1;
	}	
	return stack->items[stack->top];
}

int main(void) {
	Stack stack;
	initialize(&stack);

	char ch;
	int op1, op2, value;

	printf("���� �Է��ϼ���: ");
	while((ch = getchar()) != '\n') {
		if (ch >= '0' && ch <= '9') {
			push(&stack, ch - '0');
		}
		else if (ch != '+' || ch != '-' || ch != '*' || ch != '/') {
			op2 = pop(&stack);
			op1 = pop(&stack);
			switch (ch) {
			case '+': push(&stack, op1 + op2);
				break;
			case '-': push(&stack, op1 - op2);
				break;
			case '*': push(&stack, op1 * op2);
				break;
			case '/': push(&stack, op1 / op2);
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.");
				break;
			}
		}
	printf("���: %d\n", peek(&stack));

	return 0;
}