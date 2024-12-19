#include <iostream>
#include <string>

class palindrome_Check {
public:
    bool check_for_palindrome(const std::string& str) {
        int length = str.length();
        int left_pointer = 0;
        int right_pointer = length - 1;
        while (left_pointer < right_pointer) {
            if (str[left_pointer] != str[right_pointer])
                return false;
            left_pointer++;
            right_pointer--;
        }
        return true;
    }
};

int main() {
    palindrome_Check obj;
    std::string example_palindrome = "racecar";
    std::cout << std::boolalpha << obj.check_for_palindrome(example_palindrome) << std::endl;
    std::cout << std::boolalpha << obj.check_for_palindrome("NotAPalindrome") << std::endl;

    return 0;
}

