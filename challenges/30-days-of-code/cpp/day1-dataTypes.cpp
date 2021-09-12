#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer = 0;
    double dub = 0.0;
    string str = " ";

    // Read and save an integer, double, and String to your variables.
    cin >> integer;
    cin >> dub;
    cin.ignore();  //ignores an end of line character after cin leaves a char at the end
    getline(cin,str);

    // Print the sum of both integer variables on a new line.
    cout << integer + i << endl;
    // Print the sum of the double variables on a new line.
    cout.precision(1);
    cout << fixed << d + dub << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << "" << str << endl; 


    return 0;
}