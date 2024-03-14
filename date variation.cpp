#include<iostream>
#include<string>

using namespace std;
class dmy
{
	int date;
	int month;
	int year;
	
	
	public:
		void getdata()
	{
		cout<<"Enter the date,month,year"<<endl;
		cin>>date>>month>>year;
	}
	void display()
	{
		cout<<date<<"/"<<month<<"/"<<year<<endl;
		cout<<date<<"/"<<monthconverter(month)<<"/"<<year<<endl;
	}
	string monthconverter(int mon)
	{
		string cal[]={",","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEPT","OCT","NOV","DEC"};
		return cal[mon];
	}
};
int main()
{
	dmy d1;
	d1.getdata();
	d1.display();
}
