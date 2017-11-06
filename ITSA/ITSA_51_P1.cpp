// ITSA 51 Problem 1
#include <iostream>
using namespace std;
//  0   ->  00000000
//  1   ->  00000001
//  . . .
//  127 ->  01111111
// -128 ->  10000000    First digit is 1 and other digits are the same as 0
// -127 ->  10000001    First digit is 1 and other digits are the same as 1
//  . . .
// -2   ->  11111110    First digit is 1 and other digits are the same as (-2)+128=126
// -1   ->  11111111    First digit is 1 and other digits are the same as (-1)+128=127
int main(){
    int datanum; //測資數量
    cin>>datanum;
    while (datanum--){
        int dec;
        cin>>dec;
        if (dec>=0)cout<<"0";
        if (dec<0){
            dec=dec+128;
            cout<<"1";
        }
        cout<<dec/64;
        dec=dec-(dec/64)*64;
        cout<<dec/32;
        dec=dec-(dec/32)*32;
        cout<<dec/16;
        dec=dec-(dec/16)*16;
        cout<<dec/8;
        dec=dec-(dec/8)*8;
        cout<<dec/4;
        dec=dec-(dec/4)*4;
        cout<<dec/2;
        dec=dec-(dec/2)*2;
        cout<<dec/1<<endl;       

    }
}
