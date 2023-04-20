#include<iostream>
#include<string.h>
using namespace std;

class destructors{

	public:
	~destructors(){
		cout<<"this is destructors";
	}
	display(){
		cout<<"normal function"<<endl;
	}

};

int main(){
	destructors obj;
	obj.display();

	return 0;
}


