// ITSA 55 Problem 2 
#include <iostream>
using namespace std;
int main(){
    int datanum; //測資數量
    cin>>datanum;
    while (datanum--){
        int a,b,c;
        cin>>a>>b>>c;
        for (int i=0;1;i++){
            if (((17*i+c)%7==a)&&((17*i+c)%11==(11-b))){
                cout<<17*i+c<<endl;
                break;
            }
        }
    }
}
