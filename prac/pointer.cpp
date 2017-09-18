#include <iostream>
using namespace std;
int main(){
    int v1=33;
    int *p=&v1;
    cout<<"p= "<<p<<endl;
    cout<<"*p= "<<*p<<endl;
    *p=22;
    cout<<"v1= "<<v1<<endl;
}
