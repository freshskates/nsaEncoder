
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string getFileName(); 


int main()
{
    
    string objective = "Encode any string entered by adding 1 to the ASCII value, outputs to secret.txt"; 
    string instructions = ""; 
    string fileName; 
    ifstream fin; 
    ofstream fout;
    string line; 
    int lineNumber = 0; 
    string output = "secret.txt";

   

    fileName = getFileName();
    fin.open(fileName.c_str());
    fout.open(output.c_str());
    if (!(fin.good())) throw "I/O error";


    while (fin.good())
    {
        lineNumber = lineNumber + 1;
        getline(fin, line);
        for (int i = 0; i < line.length(); i++) {

            line[i] = line[i] - 1;

        }



        fout << line << endl;
        cout << line << endl;
    }

}



string getFileName()
{

    string fN;


    do
    {
        cout << "Please enter an input filename [i.e.: x.txt]: ";
        getline(cin, fN);
    } while (!(fN.length() >= 5));
    return fN;
}