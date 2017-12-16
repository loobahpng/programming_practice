// 2017/05/23 Q2 12195: Jingle Composing
#include <iostream>
#include <string>
using namespace std;
int main(){
    string input; 
    cin>>input;
    while (input!="*"){
        int correct=0; //number of measures with correct duration
        int duration=0; //make full duration 64
        for (int i=0;i<input.size();i++){
            if (i==0) continue;
            if (input[i]=='W') duration=duration+64; 
            if (input[i]=='H') duration=duration+32; 
            if (input[i]=='Q') duration=duration+16; 
            if (input[i]=='E') duration=duration+8; 
            if (input[i]=='S') duration=duration+4; 
            if (input[i]=='T') duration=duration+2; 
            if (input[i]=='X') duration=duration+1; 
            if (input[i]=='/') {
                if (duration==64)correct=correct+1;
                duration=0;}
            
        }
        cout<<correct<<endl;
        cin>>input;
    }    
}
