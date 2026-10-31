#include <iostream>
using namespace std;

class a{
	public :
		void display(){
			cout<<"a";
		}
};

class b:public a{
     public:
     	void Show(){
		    cout<<"b";
	    }
};

int main(){
	
	b obj;
	obj.display();
	obj.Show();
	
}
