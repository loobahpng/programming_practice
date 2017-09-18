#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    int ncase;
    cin>>ncase;
    int n=0;
    while (1){
        vector<int> orderlist;
        while (1){
            string s;
            getline(cin,s);
            stringstream ss(s);
            int order;
            while (ss>>order){
                orderlist.push_back(order);
            }
            if (s!="")break;
        }
        while(1){
            vector<double> numlist;
            string s;
            getline(cin,s);
            stringstream ss2(s);
            double num;
            while (ss2>>num){
                numlist.push_back(num);
            }
            for (int i=1;i<=orderlist.size();i++)
                for (int j=0;j<orderlist.size();j++)
                    if (orderlist[j]==i) cout<<numlist[j]<<endl;
            cout<<endl;
            if (s!="")break;
        }
        n++;
        if (n==ncase)break;
    }
}
