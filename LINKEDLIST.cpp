//singly linked list
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* n1;
		Node(int val):data(val),n1(NULL){}
		
};
class linkedlist
{
	private:
		Node* head;
	public:
		linkedlist():head(NULL){
			
		}
		void insert(int data)
		{
			Node* newN=new Node(data);
			newN->n1=head;
			head=newN;
			cout<<data<<" is inserted"<<endl;
		}
		void del()
		{
			if(head==NULL)
			{
				cout<<"emplty";
				return;
			}
			else
			{
				Node* temp=head;
				head=head->n1;
				cout<<temp->data<<"deleted"<<endl;
				delete temp;
			}
		}
		void disp()
		{
			cout<<"linkedklist is"<<endl;
			Node* curr=head;
			while(curr!=NULL)
			{
				cout<<curr->data<<endl;
				curr=curr->n1;
			}
			cout<<endl;
		}
};
int main()
{
	linkedlist l1;
	l1.insert(95);
	l1.insert(78);
	l1.disp();
	l1.del();
	l1.disp();
	return 0;
}
