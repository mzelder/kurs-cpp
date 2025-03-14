#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Example string for manipulation";
    
    // 1. empty()
    cout << "Is the string empty? " << (text.empty() ? "Yes" : "No") << endl;
    
    // 2. size() and length()
    cout << "String length (size): " << text.size() << endl;
    cout << "String length (length): " << text.length() << endl;
    
    // 3. at()
    try {
        cout << "Character at position 5: " << text.at(5) << endl;
    } catch (out_of_range &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    // 4. clear()
    text.clear();
    cout << "After clearing, is the string empty? " << (text.empty() ? "Yes" : "No") << endl;
    
    // 5. erase()
    text = "Example string";
    text.erase(5, 4);
    cout << "After erasing 4 characters from index 5: " << text << endl;
    
    // 6. find()
    text = "String manipulation";
    size_t position = text.find("string");
    if (position != string::npos)
        cout << "Found 'string' at position: " << position << endl;
    else
        cout << "'string' not found" << endl;
    
    // 7. swap()
    string str1 = "First";
    string str2 = "Second";
    cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    str1.swap(str2);
    cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    
    // 8. substr()
    text = "Programming in C++";
    string substring = text.substr(14, 3);
    cout << "Substring from position 14 with length 3: " << substring << endl;
    
    // 9. append()
    text.append(" is interesting!");
    cout << "After appending text: " << text << endl;
    
    return 0;
}
