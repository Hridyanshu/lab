#include<iostream>
using namespace std;
class calculator
{
	public:
	float add(float a,float b);
	float sub(float a,float b);
	float product(float a,float b);
	float division(float a,float b);	
};
int main()
{
	int choice;
	float a,b;
	cout<<"Calculator program:"<<endl<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
	cout<<"Enter your choice";
	cin>>choice;
	switch (choice)
	{
		case 1: add(a,b);
		break;
		case 2: sub(a,b);
		break;
		case 3: product(a,b);
		break;
		case 4: division(a,b);
		break;
		default: cout<<"Program terminated due to invalid choice."<<endl; 
	}
	return 0;
}
