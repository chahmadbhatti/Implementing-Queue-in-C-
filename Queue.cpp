#include <iostream>
using namespace std;

class Q
{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		Q()
		{
			front = -1;
			rear = -1;
			for (int i=0; i<5; i++)
			{
				arr[i] = 0;	
			}	
		}

bool isFullQ()
{
	if(rear == 4)
	return true;
	
	else
	return false;
}

bool isEmptyQ()
{
	if(front == -1 && rear == -1)
	return true;
	
	else
	return false;
	
}

void in_queue(int x)
{
	if (isFullQ())
	{
	cout<<"Queue is already full\n";
	}
	
	else if(isEmptyQ())
	{
		rear = 0;
    	front = 0;
		arr[rear] = x;
	}
	
	else
	{
		rear++;
		arr[rear] = x;

	}
}

int del_queue()
{
	int a=0;
	if(isEmptyQ())
	{
		cout<<"\nQueue is already empty"<<endl;
		return a;
	}
	
	else if(rear == front)
	{
		a=arr[rear];
		rear = -1;
		front = -1;
		return a;
	}
	
	else
	{
		cout<<"\n\nDeleting value at front..."<<endl;
		a = arr[front]; 
		arr[front] = 0;
		front++;
		return a;
	}
}

void val_front()
{
	cout<<"\n\nElement at the front of queue is: "<<arr[front]<<endl;
}

void val_rear()
{
	cout<<"\nElement at the rear of queue is: "<<arr[rear]<<endl;
}

void disp()
{
	cout<<"\nElements of Queue are: ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
}

};
int main()
{
	Q qu;
	qu.in_queue(54);
	qu.in_queue(39);
	qu.in_queue(76);
	qu.in_queue(48);
	qu.in_queue(12);
	qu.disp();
	
	qu.val_front();
	qu.val_rear();
	
	qu.del_queue();
	cout<<"Queue after deleting, ";
	qu.disp();
	
	
	
	return 0;
}