#include <iostream> 
using namespace std; 

class Calculate{ 
	
	// Access Modifiers 
	public: 
		// data member 
		int num1 = 50; 
		int num2 = 30; 
		
		// memeber function 
		int addition() { 
			int result = num1 + num2; 
			// cout << result << endl; 
            return result;
		} 
}; 

int main() { 
	
	// object declaration 
	Calculate add; 
	// member function calling 
	int res = add.addition(); 
    cout << res << endl;
	return 0; 
}
