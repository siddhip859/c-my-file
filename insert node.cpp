#include<iostream>
using namespace std;
class Node{
	public:int data;
	Node* next;
};
class List{
	private:Node*head;
	public:List(){ 
		head=NULL;
	}
	void insert(int d){
		Node* newNode=new Node;
		newNode->data=d;
		newNode->next=NULL;
		head=newNode;
	}void display()
	{
		Node* current=head;
		while(current!=NULL)
		
		{
			cout<<current->data<<endl;
			current=current->next;
		}
	}
};
int main(){
	List l;
	l.insert(5);
	l.insert(6);
	l.display();
	return 0;
}
