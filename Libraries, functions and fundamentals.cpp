#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int x = 4
	string first = "John";
	string last = "Doe";
	string full = first.append(" "+last); //Append can be used to concatenate stirgns adding them together "John Doe"
	cout << "Length of name is " << full.length() << "\n"; //Like len() returns length of string including white space, size() can also be used
	cout << full << "\n";
	cout << full[0] << "\n"; //Indexing string very similar to Python woudl output "J"
	getline (cin, full); //Cin considers whitespace as a temrinatting character only allowing the user to enter one word this allwos a user to enter multiple
    cout << full << "\n";
	cout << max(5, 10) << "\n"; // Max finds the highest valued input low() can also be used
	cout << sqrt(49) <<"\n"; //FInds square root of value (Cmath required)
	cout << round(2.6)<< "\n"; //Rounds to nearest whole numebr (Cmath required)
	cout << log(2) <<"\n"; // Logarithm fucntion base 10 (Cmath required)
	if (true) { //If statement, very similar to python condition in brackets , else if used instead of elif
		cout << "Statement was true \n";
	}
	switch (x) { //More specific if statemnt allwos multiple blocks of code to be ran on condiction
	case 1:
		cout << "1 \n";
		break;
	case 2:
		cout << "2 \n";
		break;

	
	}
}
