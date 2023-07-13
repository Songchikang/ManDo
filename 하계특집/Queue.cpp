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
		printf("큐가 가득 찼습니다.\n");
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
		printf("큐가 비어있습니다.\n");
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
		printf("큐가 비어있습니다.\n");
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

	printf("큐의 맨 앞 데이터: %d\n", peek(&queue));
	printf("큐에서 데이터 삭제: %d\n", dequeue(&queue));
	printf("큐에서 데이터 삭제: %d\n", dequeue(&queue));
	printf("큐의 맨 앞 데이터: %d\n", peek(&queue));

	return 0;
}