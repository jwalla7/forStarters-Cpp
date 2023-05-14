#include <iostream>
#include <string>

bool isPalindrome(std::string text) {
    std::string reversed_text = "";

    for (int i = text.size() - 1; i >= 0; i--) {
        reversed_text += text[i];
    }
    
    if (reversed_text == text) {
        return true;
    }

    return false;
}

int main() {
    std::cout << isPalindrome("madam") << "\n";
    std::cout << isPalindrome("racecar") << "\n";
    std::cout << isPalindrome("isaiah") << "\n";
    return 0;
}