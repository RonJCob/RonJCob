
// A stitched together program to use for testing
// the reverse engineering capabilities of Rhapsody


// function to concatenate 2 strings
void catStrings(){
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;
 }

// function for length of string object
void lenStrings(){
    string s1

    cout << "Enter string: ";
    getline (cin, s1);

// you can also use str.length()
    cout << "String Length = " << s1.size();
 }

// function to
void cpyStrings() {
    string s1, s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;
}


# include <iostream>
using namespace std;

int main()
{
char oper;

cout << "Enter the option for the operation you want to perform: ";
cout << " A to concatenate 2 strings";
cout << " B to determine the length of a string";
cout << " C to copy to the string entered";

switch (oper) {
        case 'A':
            catStrings();;
            break;
        case 'B':
            lenStrings();;
            break;
        case 'C':
            cpyStrings();;
            break;
        default:
            cout << "The choice you entered doesn't match any of the options";
            cout << "Error! The option is not correct";
            break;

return 0;
}


