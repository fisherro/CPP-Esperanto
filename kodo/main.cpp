#include "EO.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello" << endl;
	
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	if( number == 0 ) 
	{
	}
	else if ( number == 1 )
	{
	}
	else 
	{
	}
	
	for ( int i = 0; i < number; i++ )
	{
		cout << "Number " << i << endl;
	}
	
	number = number * 3;
	while ( number > 0 )
	{
		cout << number << "\t";
		number--;
	};
	
	cout << "end" << endl;
	
    return 0;
}
