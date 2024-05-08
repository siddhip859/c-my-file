#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
	node()
	{
		data=0;
		next=Null;
	}
}

class linkedlist
{
	node *head;
	node *createnode();
	voit initnode(node *nd,int data);
	
	public:
		linkedlist();
		~linkedlist();
		void attachbegin(int data);
		void attachend(int data);
		node *detachbegin();
		node *detachend();
		void traverse();
		node *search(int data);
}

int main()
{
	int ch;
	int data;
	int pos;
	int temp;
	while(1)
	{
		cout<<"Enter command : "<<endl;
		cout<<"1.add at begin \n 2.add at end \n 3.add at \n 4.delete at end \n 6.delete at \n 7.traverse \n 8.search \n 9.exit"<<endl;
		
		cin>>ch;
		switch(ch);
		{
			case 1 : cout<<"enter the data at add "<<endl;
			cin>>data;
			 
		}
	}
}
