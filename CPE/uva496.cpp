// 2017/03/28 Q3 496: Simply Subsets
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    string str;
    vector <int> vec1,vec2;
    int reading=1;
    while (getline(cin,str)){
        stringstream sstream(str);
        int temp;
        while(sstream>>temp){
            if (reading==1)vec1.push_back(temp);
            if (reading==2)vec2.push_back(temp);
        }
        if (reading==1){
            reading=2;
            continue; //finish reading the 1st line, go to read the 2nd line
        }
        if (reading==2){
            //search in vec2 for every element in vec1
            //and vice versa
            int found1=0,found2=0;
            for (int i=0;i<vec1.size();i++){
                for (int j=0;j<vec2.size();j++){
                    if (vec2.at(j)==vec1.at(i))found1++;
                }
            }
            for (int i=0;i<vec2.size();i++){
                for (int j=0;j<vec1.size();j++){
                    if (vec1.at(j)==vec2.at(i))found2++;
                }
            }
            if (found1==vec1.size()&&found2==vec2.size())cout<<"A equals B"<<endl;
            if (found2==vec2.size()&&found1!=vec1.size())cout<<"B is a proper subset of A"<<endl;
            if (found1==vec1.size()&&found2!=vec2.size())cout<<"A is a proper subset of B"<<endl;
            if (found1==0&&found2==0)cout<<"A and B are disjoint"<<endl;
            if (found1!=vec1.size()&&found1!=0&&found2!=vec2.size()&&found2!=0)cout<<"I'm confused!"<<endl;
            reading=1;
            vec1.clear();
            vec2.clear();
        }
    }
}
