
#include <iostream>
using namespace std;
#include <string>

string encode(string str) {
	for (int i = 0; i < str.length(); i++) {

		str[i] = str[i] - 1;

	}
	return str;

}
string decode(string str) {
	for (int i = 0; i < str.length(); i++) {

		str[i] = str[i] + 1;

	}
	return str;

}

int main()
{
	string line; 
	cout << "Enter a line a text: \n";
	getline(cin,line); 

	cout << encode(line) << endl;
	cout << decode(line) << endl;


}
