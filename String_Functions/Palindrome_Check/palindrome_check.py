class PalindromeCheck:
    def reverse_string(self, string):
        length = len(string)  # length of the string
        reversed_string = ""
        for i in range(length - 1, -1, -1):
            reversed_string += string[i]  # we reverse the string by adding characters from the end of the string.
        return reversed_string

    def check_for_palindrome(self, string):  # checking for palindrome
        reversed_string = self.reverse_string(string)  # reversing the string by calling previously defined method "reverse_string"
        return string.lower() == reversed_string.lower()  # compare ignoring case

if __name__ == "__main__":
    obj = PalindromeCheck()
    example_palindrome = "racecar"
    print(obj.check_for_palindrome(example_palindrome))
    print(obj.check_for_palindrome("NotAPalindrome"))

