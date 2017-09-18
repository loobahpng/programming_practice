#include <iostream>
using namespace std;
int main(){
    double radius1=5;
    double radius2=10;
    const double * ptr =&radius1;
    //ptr=&radius2;
    radius1=3;
    cout<<"*ptr= "<<*ptr<<endl;
}
