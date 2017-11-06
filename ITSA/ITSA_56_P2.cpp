// ITSA 56 Problem 2 
#include <iostream>
using namespace std;

// n1*x+n2*y = N
// Find min of d1*x+d2*y
int main(){
    int datanum; //測資數量
    cin>>datanum;
    while (datanum--){
        int N,n1,n2,d1,d2;
        cin>>N;
        cin>>n1>>d1;
        cin>>n2>>d2;
        int min=-1;
        int x=0,y=0;
        for (int i=0;i<=N/n1;i++){
            if ((N-n1*i)%n2==0 && (i*d1+((N-n1*i)/n2)*d2<min || min==-1) ){
                x=i;
                y=(N-n1*x)/n2;
                min=x*d1+y*d2;
            }            
        }
        if (x==0 && y==0){
            cout<<"false"<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}
