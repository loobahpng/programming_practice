#include <iostream>
#include <string>
using namespace std;
int main(){
    int ndata;
    cin >>ndata;
    for (int data=0;data<ndata;data++){
        int nShops;
        cin>>nShops;
        int *shops = new int[nShops];
        for (int i=0;i<nShops;i++){
            cin>>shops[i];
        }
        int maxi=shops[0];
        for (int i=0;i<nShops;i++){
            if (maxi<=shops[i])maxi=shops[i];
        }
        int mini=shops[0];
        for (int i=0;i<nShops;i++){
            if (mini>=shops[i])mini=shops[i];
        }
        cout<<(maxi-mini)*2<<endl;
    }
}
