#include <iostream>
using namespace std;

int main() {
    int num, factorial, i;

    
    cout << "Enter the number to find factorial: ";
    cin >> num;
    
    
	for(i=0; i<=num; i++){
	if (num==0 || num==1){
        cout<<"Factorial is 1";
    }
        factorial=num*i;
        cout<<"Factorial of %d = %d"<<num,factorial;
    }
    return 0;
}
