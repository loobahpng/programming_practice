// 2017/03/28 Q2 10038: Jolly Jumpers
#include <iostream>
using namespace std;
int abs(int a,int b){
    if (a>=b) return a-b;
    if (a<b) return b-a;
}
int main(){
    while(1){
        int seq[3000]={0};
        int absseq[2999]={0};
        int nnumbers;
        cin>>nnumbers;
        for (int i=0;i<nnumbers;i++){
            cin>>seq[i];    
        }
        if (cin.eof())break;
        bool jolly=1;
        for (int j=0;j<nnumbers-1;j++){
            absseq[j]=abs(seq[j+1],seq[j]);
        }
        int iffound=0;
        for (int j=1;j<nnumbers;j++){
            for (int m=0;m<nnumbers-1;m++){
                if (absseq[m]==j){
                    iffound=1;
                    break; 
                }
            }
            if (iffound==0){
                jolly=0;
                break;
            }
            iffound=0;
        }
        if (jolly==1)cout<<"Jolly"<<endl;
        if (jolly==0)cout<<"Not Jolly"<<endl;
    }
}
