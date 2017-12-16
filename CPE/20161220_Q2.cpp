//2016/12/20 Q2 10242: Fourth Point!!
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    while(1){
        double x[8];
        for (int i=0;i<8;i++){
            cin>>x[i];
        }
        if (cin.eof())break;
        double xans,yans;
        if (x[2]==x[4]&&x[3]==x[5]){
            xans=x[6]-x[2]+x[0];
            yans=x[7]-x[3]+x[1];
        }
        if (x[2]==x[6]&&x[3]==x[7]){
            xans=x[4]-x[6]+x[0];
            yans=x[5]-x[7]+x[1];
        }
        if (x[0]==x[6]&&x[1]==x[7]){
            xans=x[4]-x[6]+x[2];
            yans=x[5]-x[7]+x[3];
        }
        if (x[0]==x[4]&&x[1]==x[5]){
            xans=x[6]-x[0]+x[2];
            yans=x[7]-x[1]+x[3];
        }
        printf("%.3lf %.3lf\n",xans,yans);
    }

}
