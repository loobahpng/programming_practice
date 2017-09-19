// 2017/05/23 Q4 1200: A DP Problem
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    int ndata; 
    cin>>ndata;
    for (int i=0;i<ndata;i++){
        string input;
        double coeff=0;
        double cons=0;
        cin>>input;
        int eqpos=input.find('=');
        int xpos=input.find('x');
        while (xpos!=-1){
            int temp=0;
            for (int i=1;1;i++){
                if (xpos-i<0)break;
                if (input[xpos-i]=='-'){temp=temp*-1;break;}
                if (input[xpos-i]=='+')break;
                if (input[xpos-i]=='=')break;
                temp+=(input[xpos-i]-'0')*pow(10,(i-1));
            }
            if (xpos==0)temp=1;
            if (input[xpos-1]=='='||input[xpos-1]=='+')temp=1;
            if (input[xpos-1]=='-')temp=-1;
            if (xpos<eqpos)coeff+=temp;
            if (xpos>eqpos)coeff-=temp;
            xpos=input.find('x',xpos+1);
        }
        int signpos;
        if (input.find('+')<=input.find('-'))signpos=input.find('+');else signpos=input.find('-');
        while (signpos!=-1){
            int temp=0;
            if (input[signpos-1]!='x'){
                for (int i=1;1;i++){
                    if (signpos-i<0)break;
                    if (input[signpos-i]=='-'){temp=temp*-1;break;}
                    if (input[signpos-i]=='+')break;
                    if (input[signpos-i]=='=')break;
                    temp+=(input[signpos-i]-'0')*pow(10,(i-1));
                }}
            if (signpos<eqpos)cons-=temp;
            if (signpos>eqpos)cons+=temp;
            if (input.find('+',signpos+1)<=input.find('-',signpos+1))signpos=input.find('+',signpos+1);else signpos=input.find('-',signpos+1);
        }
        if (input[eqpos-1]!='x'){
            int temp=0;
            for (int i=1;1;i++){
                if (eqpos-i<0)break;
                if (input[eqpos-i]=='-'){temp=temp*-1;break;}
                if (input[eqpos-i]=='+')break;
                if (input[eqpos-i]=='=')break;
                temp+=(input[eqpos-i]-'0')*pow(10,(i-1));
            }
            cons-=temp;
        }
        if (input[input.size()-1]!='x'){
            int temp=0;
            for (int i=1;1;i++){
                if (input[input.size()-i]=='-'){temp=temp*-1;break;}
                if (input[input.size()-i]=='+')break;
                if (input[input.size()-i]=='=')break;
                temp+=(input[input.size()-i]-'0')*pow(10,(i-1));
            }
            cons+=temp;
        }
//        cout<<"total cons "<<cons<<endl;
//       cout<<"total coeff "<<coeff<<endl;
        if (coeff==0&&cons!=0)cout<<"IMPOSSIBLE"<<endl;
        if (coeff==0&&cons==0)cout<<"IDENTITY"<<endl;
        if (coeff!=0) cout <<floor((cons/coeff))<<endl;
    }
}
