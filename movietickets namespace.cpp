#include<iostream>
using namespace std;
class Movie{
	//char MovieName[50];
	public: static int MovieCount;
		public: Movie()
		{
		  Movie::MovieCount++;
			cout<<"TICKET SOLD : "<<Movie::MovieCount;
		}
//		void MovieBook()
//		{
//		
//		}
		static void MovieNotBooked()
		{
			cout<<"THE END \nTOTAL NUMBER OF TICKET SOLD : "<<Movie::MovieCount;
		}
		
};

int main()
{
	int ticket;
	char ch;
	cout<<"Enter your choice y/n : ";
	cin>>ch;
	if(ch=='y')
	{	
		Movie m;
		cout<<"ticket booked"<<endl;
		cout<<"ticket count : "<< Movie::MovieCount;

	}
	else
	{
		Movie::MovieNotBooked();
	}
	
	
	return 0;
}
