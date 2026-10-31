#include <iostream>
using namespace std;

class A{
	public:
		void result(){
			cout<<"Hello!"<<endl;
		}
};

class B : public A{

};

class C : public A{
	
};

class D : public B, public C{
	
};

int main(){
	
	D obj;
	obj.B::result();
	obj.C::result();
}

