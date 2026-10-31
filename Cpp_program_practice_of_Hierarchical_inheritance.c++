#include <iostream>
using namespace std;

class latters{
	public:
		void result(){
			cout<<"Show Latters"<<endl;
		}
};

class a : public latters{
	public:
		void display(){
			cout<<"latter A"<<endl;
		}
};

class b : public latters{
	public:
		void show(){
			cout<<"latter B"<<endl;
		}
};

int main(){

	a ob;
	ob.result();
	ob.display();
	b obj;
	obj.result();
	obj.show();
	
}
