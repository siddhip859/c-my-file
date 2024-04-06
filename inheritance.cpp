#include<iostream>
#include<string.h>
using namespace std;

class person
{
	public:	
		string name;
		int age;
		
		void set()
		{
			cout<<"enter the name "<<endl;
			cin>>name;
			cout<<"enter the age"<<endl;
			cin>>age;
		}
};
class student:public person
{
	public:
//		string name;
//		int age;
		string id;
		string department;
		void set2()
		{
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter department"<<endl;
			cin>>department;
		}
		
		void display()
		{
			cout<<"NAME"<<name<<endl;
			cout<<"AGE"<<age<<endl;
			cout<<"ID"<<id<<endl;
			cout<<"DEPARTMENT"<<department<<endl;
		}
};
int main()
{
	student s1;
	s1.set();
	s1.set2();
	s1.display();
	return 0;
}
