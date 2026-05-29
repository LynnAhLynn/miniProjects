
#include <iostream>

using namespace std;

int main(int argc, char **argv)

{

	cout << "Enter an amount in cents" << endl;  
	
	int centamount {0};

	cin >> centamount;
	
	
	cout << "You can provide change for this amount as follows:" << endl;  
	
	int dollarval {0};
	int quarterval {0};
	int dimeval {0};
	int nickelval {0};	
	int pennyval {0};	
	
	
	dollarval = centamount/100;
	quarterval = (centamount%100)/25;
	dimeval = (centamount%100%25)/10;
	nickelval = (centamount%100%25%10)/5;
	pennyval = centamount%100%25%10%5; 
 
	
	cout << "dollars:  " << dollarval << endl;	
	cout << "quarters:  " << quarterval << endl;
	cout << "dimes:  " << dimeval << endl;	
	cout << "nickels:  " << nickelval << endl;
	cout << "pennies:  " << pennyval << endl;
	
	return 0;
}
