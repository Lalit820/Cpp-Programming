#include <iostream>
using namespace std;

class Even_Odd{
	public:
    	int num;
	
    	void getdata(){
	    	cout<<"Enter the number to check wether its even or odd:";
		    cin>>num1;
    	}
    	void result(){
    		if(num%2==0){
    			cout<<"The number is Even.";
			}else{
				cout<<"The number is Odd.";
			}
    	} 
};

int main(){
	
	Even_Odd EO;
	di.getdata();
	di.result();
	
}
