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

// takes in input, checks if valid, returns input
string getInput() {
    string ans;
    cin >> ans;
    ans[0] = tolower(ans[0]); // make lowercase
    //check if valid answer
    while (ans[0] != 'a' && ans[0] != 'b' && ans[0] != 'c' && ans[0] != 'd' || ans.length() > 1) {
        cout << YELLOW_COLOR << "Invalid answer" << RESET_COLOR << ", please enter a, b, c, or d: ";
        cin >> ans;
        ans[0] = tolower(ans[0]);
    }
    return ans;
}

// takes in correct answer, checks if user input is correct, prints correct or incorrect
void printAnswer(char answer) {
    cout << DARK_GRAY_COLOR << "\nEnter your answer: " << RESET_COLOR;
    string ans = getInput();
    if (ans[0] == answer) {
        cout << GREEN_COLOR << "Correct!" << RESET_COLOR << endl;
        correctAnswers++;
    } else cout << RED_COLOR << "Incorrect! " << RESET_COLOR << "The correct answer is " << string(1, answer) << endl;
}

// prints question, options, and calls printAnswer
void questionPrint(string question, string a, string b, string c, string d, char answer) {
    cout << BLUE_COLOR << "\nQuestion " << QuestionsNumber++ << ":" << RESET_COLOR << endl;
    cout << question << endl;
    cout << "a) " << a << "\nb) " << b << "\nc) " << c << "\nd) " << d << endl;
    printAnswer(answer);
}

// takes in question and answer, checks if user input is correct, prints correct or incorrect
void stringQuestion(string question, string answer) {
    cout << BLUE_COLOR << "\nQuestion " << QuestionsNumber++ << ":" << RESET_COLOR << endl;
    cout << question << endl;
    cout << DARK_GRAY_COLOR << "Enter your answer: " << RESET_COLOR;
    string input;
    cin >> input;
    if (input == answer) {
        cout << GREEN_COLOR << "Correct!" << RESET_COLOR << endl;
        correctAnswers++;
    } else cout << RED_COLOR << "Incorrect! " << RESET_COLOR << "The correct answer is " << answer << endl;
}

int main () {
    cout << "Welcome to the best c++ quiz. There are 40 questions!! \nSome questions will have multiple choice answers, others will require you to type in the answer." << endl;

    questionPrint("What is the output of the following code? for (int i = 0; i < 10; i++) { cout << i; }",
    "1 2 3 4 5 6 7 8 9 10",
    "0 1 2 3 4 5 6 7 8 9",
    "0123456789",
    "12345678910",
    'c');

    questionPrint("Which of these is not a valid way of initializing an integer?",
    "int a = 1;",
    "int a(1);",
    "int a = {1};",
    "int a{1};",
    'c');

    //auto and decltype
    questionPrint("What does the 'auto' keyword in C++ primarily mean?",
    "Implicit type conversion",
    "Dynamic memory allocation",
    "Type deduction",
    "Operator overloading",
    'c');

    //fundamental data types
    questionPrint("Which of these is not a fundamental data type?",
    "int",
    "float",
    "double",
    "string",
    'd');

    questionPrint("Which of this is used to print a new line?",
    "\\n",
    "\\t",
    "\\r",
    "\\a",
    'a');

    //cout << "hello" "world \n";
    questionPrint("What is the output of the following code? cout << \"hello\" \"world \\n\";",
    "\"helloworld\" and a newline",
    "hello world",
    "hello world\\n",
    "hello world\\n\\n",
    'a');

    //const vs define

    //different between ++x and x++
    //x++ returns the value of x before it is incremented
    //++x returns the value of x after it is incremented
    questionPrint("What is printed? int x = 5; cout << ++x; cout << x++;",
    "56",
    "66",
    "65",
    "55",
    'b');

    //const double pi = 3.14;
    //x=y=z=0
    stringQuestion("What value does x have? y=z=4; x=y+z;", "8");

    //&&, ||, !, ==
    questionPrint("Which of these is the correct way to check if x is the same as y or z?",
    "x == y || z",
    "x == y && z",
    "x == y || x == z",
    "x == y && x == z",
    'c');

    //7==5 ? 4 : 3
    //which returns the larger number? return a > b ? a : b;
    questionPrint("Which of these does NOT return the larger number?",
    "return a > b ? a : b;",
    "return max(a, b)",
    "return a > b ? b : a;",
    "if (a > b) return a; else return b;",
    'c');

    //is this the same
    //cin>>a>>b;
    //cin>>a;
    //cin>>b;
    stringQuestion("Is the following code the same? \"cin>>a>>b;\" and \"cin>>a; cin>>b;\", type yes or no", "yes");

    //cin vs getline
    questionPrint("What is the difference between cin and getline?",
    "cin takes input up to a space, getline takes input up to a new line",
    "cin takes input up to a new line, getline takes input up to a space",
    "cin takes in a char, getline takes in a string",
    "cin takes in a string, getline takes in a char",
    'a');

    //template
    questionPrint("What is the purpose of the following C++ code?\n"
    "template <typename T>\n"
    "void swap(T& a, T& b) {\n"
    "    T temp = a;\n"
    "    a = b;\n"
    "    b = temp;\n"
    "}\n",
    "It calculates the average of two numbers",
    "It swaps the values of two variables, regardless of their type",
    "It checks if two variables are equal",
    "It calculates the product of two numbers",
    'b');

    //stringstream, to_string, stoi, stod
    stringQuestion("What is the value of ss.str() after the following code? stringstream ss; ss << 5 << 10; ss << hi;", "510hi");

    // for (n=0, i=100; n!=1; ++n, --i) {} //more than one condition
    questionPrint("When does this for loop run? for (n=0, i=100; n!=1; ++n, --i) {}",
    "When n is not equal to 1",
    "When n is equal to 1",
    "When i is equal to 1",
    "When i is not equal to 1",
    'a');

    //range based for loop, //for (char c : str) {cout << c << endl;}
    questionPrint("What is an example of a range based for loop?",
    "for (int i = 0; i < 10; i++)",
    "for (int i : v)",
    "for (int i = 0; i < v.size(); i++)",
    "for (int i = 0; i < v.size(); i++)",
    'b');

    //break;, continue;, goto;, return;
    stringQuestion("You want to end the skip this iteration in a loop, which of these do you use? Type break, continue, goto, return", "continue");

    //switch statement
    questionPrint("Which scenario is most likely to use a switch statement?",
    "When you want to check if a number is even or odd",
    "When you want to check if a number is positive or negative",
    "When you want to check if a number is 1, 2, or 3, and do different things for each",
    "When there is a vector of numbers to output",
    'c');

    //default perameters int devide (int a, int b=1) // devuide(12) is 12/2
    questionPrint("Default perameters are used for which of these?",
    "To make the code more readable",
    "To allow the user to input some or all of the perameters in a function",
    "To overload the function",
    "To let the user know what the function does",
    'b');

    stringQuestion("Type the value that will be outputted by the following code: cout << (5/2+1)", "3");
    stringQuestion("What is the output of the following code? cout << \"hi\" + 10 + \"bye\" << endl;", "hi10bye");

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

    //unsigned and signed
    questionPrint("Which of these is FALSE about unsigned integers?",
    "They can only be positive",
    "They can store a larger range of positive numbers than signed ints",
    "They don't have a bit reserved for the sign",
    "They have a larger positive range than signed ints",
    'b');

    questionPrint("How do you make a boolean array of size 10, called visited, with all values initialized to false?",
    "bool visited[10] = false;",
    "bool visited[10];",
    "bool visited[10] = {0};",
    "bool visited[10] = {false};",
    'c');

    cout << " You correctly answered " << correctAnswers << " out of " << QuestionsNumber - 1 << " questions." << endl;
    return 0;
}