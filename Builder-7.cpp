#include<iostream>
#include<string.h>
using namespace std;

class States{
public:
    int a;
    char name[20];
    States(int a,char b[20]){
        this->a = a;
        strcpy(this->name,b);
        cout<<"Integer : "<<a<<endl;
        cout<<"Character : "<<b<<endl;
    }
};
int main (){
    char strrring[20] = "mr.bing";
    States objpara(50,strrring);
    return 0;
}
