#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<</* << this is called n insertion operator*/ "Enter the value of a:\n";
    cin>>a;/*>> This is a extraction operator*/

    cout<<"Enter the value of b:\n";
    cin>>b;
    
    cout<<"The sum is "<<a+b; 
    return 0;
}