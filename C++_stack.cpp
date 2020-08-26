#include<iostream>

using namespace std;

class Node {
public:
	int data;
	Node *next;
};
Node *head = NULL;

void Push(int val)
{
	Node *newNode = new Node;
	newNode->data = val;
	newNode->next = head;

	head = newNode;
}

void Pop()
{
	if (head == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		head = head->next;
	}
}

void Display()
{
	Node *ptr;
	if (head == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		ptr = head;
		cout << "Stack elements are" << endl;

		while (ptr != NULL)
		{
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
}
void Peek()
{
	if (head == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Peek value is :" << head->data;
	}
}

void IsEmpty()
{
	if (head == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack is not empty" << endl;
	}
}

void Count()
{
	Node *ptr;
	int count = 0;
	if (head == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		ptr = head;

		while (ptr != NULL)
		{
			count = count + 1;
			ptr = ptr->next;
		}

		cout << "Count is : "<<count << endl;
	}
}

int main()
{
	int ch, val;

	cout << "1) Push in Stack" << endl;
	cout << "2) Pop from Stack" << endl;
	cout << "3) Display Stack" << endl;
	cout << "4) Peek" << endl;
	cout << "5) Is stack empty?" << endl;
	cout << "6) Stack count" << endl;
	cout << "7) Exit" << endl;

	do{	
		cout << "Enter choice : " << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter the value" << endl;
			cin >> val;
			Push(val);
			break;
		case 2:
			Pop();
			break;
		case 3 :
			Display();
			break;
		case 4:
			Peek();
			break;
		case 5:
			IsEmpty();
			break;
		case 6:
			Count();
			break;
		case 7:
			cout << "Exit" << endl;
			break;

		default:
			cout << "Invalid choice"<<endl;
			break;
		}

	} while (ch != 7);


}
