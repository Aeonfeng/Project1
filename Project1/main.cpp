//simple stack program Dom Ralphs 2019
#include <conio.h>
#include <iostream>

using namespace std;

#define MAX 10 // define max in array

int stack[MAX]; //set array as MAX
int sp = -1;//stack pointer
int Addsum = 0; // set sum as 0

void viewstack(); //print stack to screen
void push(int); // add data to stack
void pop(void); // remove data from stack 
void initstack(void); //set up stack
void totalStack(void); //set total stack calculation

void main(void)
{
	initstack();
	viewstack();
	push(99);
	push(99);
	push(99);
	push(99);
	push(99);
	push(99);
	push(99);
	viewstack();
	/*pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	viewstack();*/


	totalStack();


	_getch();
}

void initstack(void) //iniate stack
{
	for (int i = 0; i < MAX; i++) stack[i] = 0; // set each element as -999
}

void pop(void) //remove data from the stack 
{
	if (sp == -1) cout << "Stack is empty!\n";
	else
	{
		cout << "popped " << stack[sp] << " \n";
		stack[sp] = -999;
		sp--;
	}
}

void push(int x) //add data to the stack
{
	//first check its not full
	if (sp == MAX - 1) cout << "Stack is full!\n";
	else
	{
		sp++;//increment the stack pointer
		stack[sp] = x;
		cout << "Data Added " << x << " \n";
	}
}

void viewstack() // print stack and info to screen
{
	cout << "\n";
	for (int i = MAX - 1; i > -1; i--)
	{
		cout << " stack[" << i << "]=" << stack[i] << "\n";
	}
}


void totalStack()
{

	Addsum = Addsum + stack[MAX];
	cout << Addsum;
}

