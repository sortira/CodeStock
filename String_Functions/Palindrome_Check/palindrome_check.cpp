#include <iostream>
#include <string>

class PalindromeCheck {
public:
    std::string reverseString(const std::string& str) {
        std::string reversed;
        for (int i = str.length() - 1; i >= 0; i--) {
            reversed += str[i]; // we reverse the string by adding characters from the end of the string.
        }
        return reversed;
    }

    bool checkForPalindrome(const std::string& str) { // checking for palindrome
        std::string reversed = reverseString(str); // reversing the string by calling previously defined method "reverseString"
        return str.compare(reversed) == 0; // compare returns 0 if both strings are identical
    }
};

int main() {
    PalindromeCheck obj;
    std::string examplePalindrome = "racecar";
    std::cout << std::boolalpha << obj.checkForPalindrome(examplePalindrome) << std::endl;
    std::cout << std::boolalpha << obj.checkForPalindrome("NotAPalindrome") << std::endl;

    return 0;
}

