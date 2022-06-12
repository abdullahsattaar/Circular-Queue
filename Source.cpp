#include<iostream>
#include"Header.h"
#include"CQueue.h"
using namespace std;

int main() 
{
	CircularQueue<int> queue;
	if (queue.isEmpty())
		cout << "Que is empty" << endl;
	else
		cout << "Queue is not empty" << endl;

	int F;
	queue.queueFront(F);
	cout <<"Front is: " << F << endl;

	cout << "Que size is: " << queue.isSize() << endl;

	queue.enqueue(30);
	queue.enqueue(60);
	queue.enqueue(90);
	queue.printQueue();

	if (queue.isEmpty())
		cout << "Que is empty" << endl;
	else
		cout << "Queue is not empty" << endl;

	queue.queueFront(F);
	cout << "Front is: " << F << endl;

	cout << "Que size is: " << queue.isSize() << endl;
	queue.enqueue(45);
	queue.enqueue(50);
	queue.dequeue();
	queue.printQueue();

	system("Pause");
	return 0;
}