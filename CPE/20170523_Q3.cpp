// 2017/05/23 Q3 10056: What is the Probability?
#include <iostream>
#include <math.h>
#include <iomanip> //setprecision
using namespace std;
int main(){
    int ndata;
    cin >>ndata;
    for (int i=0;i<ndata;i++){
        int nplayers,playno;
        double prob;
        cin>>nplayers;
        cin>>prob;
        cin>>playno;
        double ans;
        ans=prob*pow((1-prob),playno-1)/(1-pow((1-prob),nplayers));
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
}
