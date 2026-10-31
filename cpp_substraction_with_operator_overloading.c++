#include<iostream>
using namespace std;

class Substraction{
    int a;
    
	public:
		void getdat(){
			cout<<"Enter the number:";
			cin>>a;
		
		}
		
		void operator-(Substraction obj){
			int sub = a-obj.a;
			cout<<"sub:"<<sub;
			
		}
};

int main(){
	
	Substraction A,B;
	A.getdat();
    B.getdat();
	A-B;
}
