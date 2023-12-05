#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

void displyBanner()
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}


int main()
{
	const string message = "Welcome to Computer Science. I am Tahsin Reza Cihan";
	
	//Get the length of the string
	L = message.length();

	//Write the banner above
	displyBanner();

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	displyBanner();

	//Write the banner below
	

	//Tell the calling shell all is well
	return 0;
}