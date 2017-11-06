// ITSA 58 Problem 5
// http://www.geeksforgeeks.org/count-number-of-ways-to-partition-a-set-into-k-subsets/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int calculate (int n,int k){
    int x;
    if (n==k)return 1;
    if (k==0)return 0;
    x=k*calculate(n-1,k)+calculate(n-1,k-1);
    return(x);
}
int main(){
    int datanum; //測資數量
    cin>>datanum;
    while (datanum--){
        string str;
        int n,k;
        cin>>str; // how to parse integer separated by comma
        // https://stackoverflow.com/questions/1894886/parsing-a-comma-delimited-stdstring
        stringstream ss(str);
        ss>>n;
        if (ss.peek() == ',')
            ss.ignore();
        ss>>k;
        cout<<calculate(n,k)<<endl;
    }
}
