#include <iostream>
using namespace std;
int main(){
    int a, i = 0;
    
    cout<<"Enter the number of which you want to print the table"<<endl;
    cin>>a;
    cout<<"The Table of "<<a<<" is:-"<<endl;
    do{
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}