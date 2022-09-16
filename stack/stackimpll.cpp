
#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node* link;
};

Node* top;


void push(int data)
{

	
	Node* temp = new Node();

	
	if (!temp) {
		cout << "\nStack Overflow";
		
	}

	temp->data = data;

	
	temp->link = top;

	top = temp;
}

// Utility function to check if
// the stack is empty or not
int isEmpty()
{
	// If top is NULL it means that
	// there are no elements are in stack
	return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{

	// If stack is not empty , return the top element
	if (!isEmpty())
		return top->data;
	
}

// Utility function to pop top
// element from the stack
void pop()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL) {
		cout << "\nStack Underflow" << endl;
		
	}
	else {

		
		temp = top;

		top = top->link;

		free(temp);
	}
}


void display()
{
	Node* temp;

	if (top == NULL) {
		cout << "\nStack Underflow";
		exit(1);
	}
	else {
		temp = top;
		while (temp != NULL) {

		
			cout << temp->data << "-> ";

			temp = temp->link;
		}
	}
}

// Driver Code
int main()
{

	// Push the elements of stack
	push(11);
	push(22);
	push(33);
	push(44);

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is " << peek() << endl;

	// Delete top elements of stack
	pop();
	pop();

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is " << peek() << endl;

	return 0;
}
