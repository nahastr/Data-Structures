#include <iostream>
using namespace std;
int* Q, front = -1, rear = -1, ch, length, num;
void create();
void enqueue();
void dequeue();
void display();

void main()
{
	do
	{
		cout << "Enter your choice\n1.create \n2. enqueue\n3.dequeue\n4. display\n5. Exit\n";
		cin >> ch;
		switch (ch)
		{
			case 1:
				create();
				break;
			case 2:
				enqueue();
				break;
			case 3:
				dequeue();
				break;
			case 4:
				display();
				break;
			default:
				cout << "Invalid Choice....";
				break;
			}
	} while (ch != 5);
}

void create()
{
	cout << "Enter the array length : ";
	cin >> length;
	Q = new int[length];
}

void enqueue()
{
	if (rear == length - 1)
		cout << "queue overflow\n";
	else 
	{
		if (front == -1)
		{
			cout << "Enter the element to be inserted : ";
			cin >> num;
			front++;
			rear++;
			Q[rear] = num;
		}
		else 
		{ 
			cout << "Enter the element to be inserted : ";
			cin >> num;
			rear++;
			Q[rear] = num;
		}
	}
}

void dequeue()
{
	if (front == -1 || front > rear)
		cout << "stack underflow..\n";
	else
	{
		cout << Q[front] << " deleted";
		front++;
	}
}

void display()
{
	if (front > rear || front == -1)
		cout << "Empty queue\n";
	else
		for (int i = front; i <= rear; i++)
			cout << Q[i] << " ";
}
