#include <iostream>
#include <vector>
#include <iomanip>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

void answerPrint(char answer) {
    cout << "\nEnter your answer: ";
    string ans;
    cin >> ans;
    ans[0] = tolower(ans[0]); //make lowercase
    //check if valid answer
    while (ans[0] != 'a' && ans[0] != 'b' && ans[0] != 'c' && ans[0] != 'd' || ans.length() > 1) {
        cout << "Invalid answer, please enter a, b, c, or d: ";
        cin >> ans;
        ans[0] = tolower(ans[0]);
    }
    cout << (ans[0] == answer ? "Correct!" : "Incorrect!, the correct answer is " + string(1, answer)) << endl;
}

void questionPrint(string question, string a, string b, string c, string d, char answer) {
    cout << question << endl;
    cout << "a) " << a << endl;
    cout << "b) " << b << endl;
    cout << "c) " << c << endl;
    cout << "d) " << d << endl;
    answerPrint(answer);
}

int main () {
    questionPrint("What is written after std::cout to print a string?",
    "<<",
    ">>",
    "::",
    ".",
    'a');

    questionPrint("What is the correct way to initialize a vector of pairs of length n, with initial values of -1? What is writen after vector<pair<int, int>> v ?",
    "(n, -1);",
    "(n, [-1, -1]);",
    "= new vector(n, make_pair(-1, -1));",
    "(n, make_pair(-1, -1));",
    'd');

    questionPrint("What data type is used to store an answer for a multiple choice question?",
    "bool",
    "int",
    "string",
    "char",
    'd');

    questionPrint("You want to name a variable, which of these is a valid name?",
    "new",
    "1st",
    "_1st",
    "sizeof",
    'c');

    cout << "Info: The first character of a variable name must be a letter or underscore (_). \nSubsequent characters may be letters, underscores, or digits." << endl;
    cout << "The name cannot be a reserved word. \nWords such as new, sizeof, void, int, ect are reserved words" << endl;

    questionPrint("Which of these takes the most memory?",
    "char",
    "long long",
    "float",
    "int",
    'b');

    cout << "Info: char = 1 byte, int = 4 bytes, float = 4 bytes, long long = 8 bytes" << endl;

    questionPrint("How many unique representable values does a 4 byte integer have?",
    "2^4",
    "2^8",
    "2^16",
    "2^32",
    'd');
    
    questionPrint("Which of these is not a valid way of initializing an integer?",
    "int a = 1;",
    "int a(1);",
    "int a = {1};",
    "int a{1};",
    'c');

    questionPrint("You want to store the length between two points, which data type would you use?",
    "int",
    "float",
    "double",
    "long long",
    'b');

    cout << "Info: float = 4 bytes, double = 8 bytes" << endl;

    questionPrint("How do you check if String A is longer than String B?",
    "A.length() > B.length()",
    "A.size() > B.size()",
    "A.length > B.length",
    "A.size > B.size",
    'a');

    questionPrint("Which of these is NOT a valid way of incrementing a variable by +1?",
    "a++",
    "++a",
    "a += 1",
    "a = a++",
    'd');

    questionPrint("Which of these does not Loop 10 times?",
    "for (int i = 0; i < 10; i++)",
    "for (int i = 0; i <= 10; i++)",
    "for (int i = 1; i <= 10; i++)",
    "for (int i = 1; i < 11; i++)",
    'b');

    questionPrint("How do you initialize a method that returns the length of a string?",
    "int length(string s) { return s.length(); }",
    "void length(string s) { return s.length(); }",
    "int length(string s) { cout << s.length(); }",
    "void length(string s) { cout << s.length(); }",
    'a');

    questionPrint("How do you take in input from the user?",
    "cin >> input << endl;",
    "cin << input;",
    "cin >> input;",
    "cin << input >> endl;",
    'c');
}