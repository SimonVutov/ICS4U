#include <iostream>
#include <vector>
#include <iomanip>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

// Define color escape sequences
const string RED_COLOR = "\033[7;31m";
const string GREEN_COLOR = "\033[1;32m";
const string YELLOW_COLOR = "\033[33m";
const string BLUE_COLOR = "\033[34m";
const string DARK_GRAY_COLOR = "\033[1;30m";
const string RESET_COLOR = "\033[0m";

// Global variables
int QuestionsNumber = 1;
int correctAnswers = 0;
int totalQuestions = 0;

string getInput() {
    string ans;
    cin >> ans;
    ans[0] = tolower(ans[0]); //make lowercase
    //check if valid answer
    while (ans[0] != 'a' && ans[0] != 'b' && ans[0] != 'c' && ans[0] != 'd' || ans.length() > 1) {
        cout << YELLOW_COLOR << "Invalid answer" << RESET_COLOR << ", please enter a, b, c, or d: ";
        cin >> ans;
        ans[0] = tolower(ans[0]);
    }
    return ans;
}

void printAnswer(char answer) {
    cout << DARK_GRAY_COLOR << "\nEnter your answer: " << RESET_COLOR;
    string ans = getInput();
    if (ans[0] == answer) {
        cout << GREEN_COLOR << "Correct!" << RESET_COLOR << endl;
        correctAnswers++;
    } else cout << RED_COLOR << "Incorrect! " << RESET_COLOR << "The correct answer is " << string(1, answer) << endl;
    totalQuestions++;
}

void questionPrint(string question, string a, string b, string c, string d, char answer) {
    cout << BLUE_COLOR << "\nQuestion " << QuestionsNumber++ << ":" << RESET_COLOR << endl;
    cout << question << endl;
    cout << "a) " << a << endl;
    cout << "b) " << b << endl;
    cout << "c) " << c << endl;
    cout << "d) " << d << endl;
    printAnswer(answer);
}

int main () {
    cout << "Type the value that will be outputted by the following code: " << endl;
    cout << "cout << 5 / 2 + 1 << endl;" << endl;
    int ans = 5 / 2 + 1;
    cout << DARK_GRAY_COLOR << "Enter your answer: " << RESET_COLOR;
    int input;
    cin >> input;
    if (input == ans) {
        cout << GREEN_COLOR << "Correct!" << RESET_COLOR << endl;
        correctAnswers++;
    } else cout << RED_COLOR << "Incorrect! " << RESET_COLOR << "The correct answer is " << ans << endl;
    totalQuestions++;



    cout << "\nWhat is the output of the following code?" << endl;
    cout << "cout << \"hi\" + 10 + \"bye\" << endl;" << endl;
    string ans2 = "hi10bye";
    cout << DARK_GRAY_COLOR << "Enter your answer: " << RESET_COLOR;
    string input2;
    cin >> input2;
    if (input2 == ans2) {
        cout << GREEN_COLOR << "Correct!" << RESET_COLOR << endl;
        correctAnswers++;
    } else cout << RED_COLOR << "Incorrect! " << RESET_COLOR << "The correct answer is " << ans2 << endl;
    totalQuestions++;



    cout << "\nType 'a', 'b', 'c', or 'd' to answer the questions." << endl;


    questionPrint("Which of these rounds a number up to the nearest integer?",
    "floor()",
    "ceil()",
    "round()",
    "trunc()",
    'b');

    questionPrint("What is the purpose of overloading a method?",
    "To make the method more efficient by reducing the number of lines of code",
    "To make the method more readable by simplifying the code",
    "To make the method more flexible by allowing it to take in different types of parameters",
    "To make the method more accurate",
    'c');

    questionPrint("Which of these takes the absolute value of a number?",
    "abs()",
    "max()",
    "positive()",
    "val()",
    'a');

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

    questionPrint("How do you overload a method?",
    "By creating a method with different parameters",
    "By creating a method with different return type",
    "By creating a method with different parameters and return type",
    "By creating a method with different parameters and different return type",
    'a');

    questionPrint("How do you make a boolean array of size 10, called visited, with all values initialized to false?",
    "bool visited[10] = false;",
    "bool visited[10];",
    "bool visited[10] = {0};",
    "bool visited[10] = {false};",
    'c');


    cout << " You correctly answered " << correctAnswers << " out of " << totalQuestions << " questions!" << endl;
    return 0;
}