// 2017/05/23 Q3 10056: What is the Probability?
#include <iostream>
#include <stdio.h>
#include <math.h>
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
        printf("%.4lf\n",ans);
    }
}
