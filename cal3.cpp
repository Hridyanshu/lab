#include<iostream>
using namespace std;
class calculator
{
        public:
                void sum(float a,float b)
                {
                        float add;
                        add=a+b;
                        cout<<"The result is: "<<add<<endl;
                }
                void diff(float a,float b)
                {
                        float sub;
                        sub=a-b;
                        cout<<"The result is: "<<sub<<endl;
                }
                void product(float a,float b)
                {
                        float mult;
                        mult=a*b;
                        cout<<"The result is: "<<mult<<endl;
                }
                void division(float a,float b)
                {
                        float div;
                        div=a/b;
                        cout<<"The result is: "<<endl;
                }
};
int main()
{
        float a,b;
        int choice;
        cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"Please enter your choice"<<endl;
        cin>>choice;
        calculator obj1;
}
