// ITSA 58 Problem 2 
#include <iostream>
using namespace std;

int main(){
    int datanum; //測資數量
    cin>>datanum;
    while (datanum--){
        int nEstimates; // n個評估結果
        int need_repair[10000]={0}; // 長度總共10000公里，不需要修補為0，若需要修補則標記為1
        cin>>nEstimates;
        while (nEstimates--){
            int min,max; //評估結果中需要修補的路段
            cin>>min;
            cin>>max;
            for (int i=min;i<max;i++){
                need_repair[i]=1; //把需要修補的路段標記為1
            }
        }
        int length=0; //需要修補的長度
        for (int i=0;i<10000;i++){
            if (need_repair[i]==1)length++; //計算整條道路被標記為1的數量
        }
        cout<<length<<endl;
    }
}
