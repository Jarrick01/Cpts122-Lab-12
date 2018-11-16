#include "Queue.h"

int main(void)
{
	Queue<int> Q1;

	int i1 = 5;

	Q1.enqueue(i1);
	Q1.enqueue(42);
	Q1.enqueue(210);

	Q1.printQueue();

	int i2;

	i2 = Q1.dequeue();

	//std::cout << i2 << std::endl;



	return 0;
}