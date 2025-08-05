#include <iostream>
using namespace std;
//this is a global scope;
int value = 160;
int main(){
    int a = 100;
    bool a_bool = true;
    //this has a local scope
    cout<<" Local Value "<<a; 
    cout<<"\n Global Value "<<::value;
    cout<<"\n"<<a_bool;
    return 0;
}
// preference is given to local operator nd after that globla one

