#include <iostream>
using namespace std;

class add{
	public:
		void result(int a, int b){

			cout<<"Sum:"<<a+b<<endl;
		}
		
		void result(int a, int b, int c){
			
			
			cout<<"Sum:"<<a+b+c<<endl;
		}
};

int main(){
	
	add obj;
	obj.result(5,2);
	obj.result(8,5,2);
}
