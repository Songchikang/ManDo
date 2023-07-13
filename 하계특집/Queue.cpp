#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

typedef struct {
	int items[MAX_SIZE];
	int front;
	int rear;
}Queue;

void initialize(Queue* queue) {
	queue->front = -1;
	queue->rear = -1;
}

bool isEmpty(Queue* queue) {
	return (queue->front == -1 && queue->rear == -1);
}

bool isFull(Queue* queue) {
	return (queue->rear == MAX_SIZE - 1);
}

void enqueue(Queue* queue, int value) {
	if (isFull(queue)) {
		printf("ť�� ���� á���ϴ�.\n");
		return;
	}
	if (isEmpty(queue)) {
		queue->front = 0;
		queue->rear = 0;
	}
	else {
		queue->rear++;
	}
	queue->items[queue->rear] = value;
}

int dequeue(Queue* queue) {
	if (isEmpty(queue)) {
		printf("ť�� ����ֽ��ϴ�.\n");
		return -1;
	}
	int dequeuedItem = queue->items[queue->front];
	if (queue->front == queue->rear) {
		queue->front = -1;
		queue->rear = -1;
	}
	else {
		queue->front++;
	}
	return dequeuedItem;
}

int peek(Queue* queue) {
	if (isEmpty(queue)) {
		printf("ť�� ����ֽ��ϴ�.\n");
		return -1;
	}
	return queue->items[queue->front];
}

int main(void) {
	Queue queue;
	initialize(&queue);

	enqueue(&queue, 10);
	enqueue(&queue, 20);
	enqueue(&queue, 30);

	printf("ť�� �� �� ������: %d\n", peek(&queue));
	printf("ť���� ������ ����: %d\n", dequeue(&queue));
	printf("ť���� ������ ����: %d\n", dequeue(&queue));
	printf("ť�� �� �� ������: %d\n", peek(&queue));

	return 0;
}