#include<iostream>
using namespace std;
class RBI//A
{ 
   public:
   	
   	   void rbi()
   	   {
   	   	   cout<<"RBI:Reserve bank of india"<<endl;
	   }
	
};
class SBI:public RBI //B :A
{
	 public:
	void sbi()
	{
		cout<<"State bank of India"<<endl;
	}
};
class BOB:public SBI //C:A
{
	public:
	void bob()
	{
		cout<<"bank of baroda"<<endl;
	}
};
int main()
{
	 cout<<"--SBI----"<<endl;
	 SBI S1 = SBI();
	 S1.sbi();
	 S1.rbi();
	 
	
	 cout<<"---BOB---"<<endl;
	 BOB B1 = BOB();
	 B1.bob();
	 B1.rbi();
	 
	 
	
	return 0;
}