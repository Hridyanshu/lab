#include<iostream>
using namespace std;
class calculator
{
     public:
        void show()

        {
            float a,b;
            int cont;

            do
           {

               int choice;
               cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"Please enter your choice"<<endl;
               cin>>choice;
               cout<<"Please enter the numbers"<<endl;
               cin>>a>>b;
               switch (choice)
               {
                       case 1: sum(a,b);
                       break;
                       case 2: diff(a,b);
                       break;
                       case 3: product(a,b);
                       break;
                       case 4: division(a,b);
                       break;
                       default: cout<<"Program terminated due to invalid choice"<<endl;
               }
                       cout<<"Press 1 to continue"<<endl<<"Press any other number to exit"<<endl;
                       cin>>cont;

             }while(cont==1);
         }
      private:
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
                       cout<<"The result is: "<<div<<endl;
               }
};
int main()
{
         calculator obj1;
         obj1.show();
         return 0;
}
