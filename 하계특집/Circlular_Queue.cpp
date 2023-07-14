#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 10

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

void enqueue(Queue* queue, int items) {
	if (isFull(queue)) {
		printf("큐가 가득 찼습니다.\n");
		return;
	}
	else {
		queue->rear = (queue->rear + 1) % (MAX_SIZE);
		queue->items[queue->rear] = items;
	}
	return;
}

int dequeue(Queue* queue) {
	if (isEmpty(queue)) {
		printf("큐가 비어있습니다.\n");
		return -1;
	}
	queue->front = (queue->front + 1) % (MAX_SIZE);
	return queue->items[queue->front];
}

int peek(Queue* queue) {
	if (isEmpty(queue)) {
		printf("큐가 비어있습니다.\n");
		return -1;
	}
	return queue->items[queue->front];
}

void queue_print(Queue* queue) {

	int i = queue->front;

	if (isEmpty(queue)) {
		printf("\n공백 큐\n");
		return;
	}

	do {
		i = (i + 1) % MAX_SIZE;
		printf("%d | ", queue->items[i]);
		if (i == queue->rear) {
			break;
		}
	} while (i != queue->front);
	printf("\n\n");
	return;
}

int main(void) {
	Queue queue;
	initialize(&queue);

	for (int i = 0; i < MAX_SIZE; i++) {
		enqueue(&queue, i);
		queue_print(&queue);
	}

	for (int i = 0; i < MAX_SIZE; i++) {
		dequeue(&queue);
		queue_print(&queue);
	}

	return 0;
}