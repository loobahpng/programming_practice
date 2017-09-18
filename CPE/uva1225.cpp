#include <iostream>
using namespace std;
int main(){
    int ndata;
    int N;
    cin>>ndata;
    for (int i=1;i<=ndata;i++){
        int numbers[10]={0,0,0,0,0,0,0,0,0,0};
        cin >>N;
        for (int j=1;j<=N;j++){
            for (int k=0;k<=9;k++){
                if (j>=1000 && k==j/1000%10) numbers[k]++;
                if (j>=100 && k==j/100%10) numbers[k]++;
                if (j>=10 && k==j/10%10) numbers[k]++;
                if (k==j%10) numbers[k]++;
            }
        }
        for (int j=0;j<=9;j++){
            cout<<numbers[j]<<" ";
        }
        cout<<endl;
    }
}
