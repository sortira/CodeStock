class PalindromeCheck:
    def check_for_palindrome(self, string):
        length = len(string)
        left_pointer = 0
        right_pointer = length - 1
        while left_pointer < right_pointer:
            if string[left_pointer] != string[right_pointer]:
                return False
            left_pointer += 1
            right_pointer -= 1
        return True

if __name__ == "__main__":
    obj = PalindromeCheck()
    example_palindrome = "racecar"
    print(obj.check_for_palindrome(example_palindrome))
    print(obj.check_for_palindrome("NotAPalindrome"))

