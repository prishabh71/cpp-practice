#include<iostream>
using namespace std;
float cal(float a, float b, char w )
{
    float result;
    switch(w)
   {
       case '+':
         result = a + b;
         break;
       case '-':
         result = a - b;
         break;
       case '*':
         result = a * b;
         break;
       case '/':
     if(b != 0)
     {
        result = a / b;
     }
     else
     {
        cout<<"Division by zero not allowed"<<endl;
        return 0;
     }
     break;
        default:
         cout<<"Invalid operator"<<endl;
         return 0;
   }
    return result;
}
int main()
{
float num1, num2;
char x;
cout<<"Enter an arithmetic operator (+, -, *, /):- "<<endl;
cin>>x;
cout<<"Enter 1st number:- "<<endl;
cin>>num1;
cout<<"Enter 2nd number:- "<<endl;
cin>>num2;
cout<<"The result is:- "<<cal(num1, num2, x)<<endl;
return 0;

}
