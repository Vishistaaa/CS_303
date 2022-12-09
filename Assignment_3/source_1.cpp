#include <iostream>

#include <conio.h>

#include <string>

#include "header_1.h"

using namespace std;

int main()

{
    
    string word1 = "civic";
    string word2 = "reviver";
    string word3 = "refer";
    string word4 = "nowhere";

   
    if (isPalindrome(word1))
    {
        
        std::cout << word1 << " is palindrome!"<<endl;
    }
    
    else
    {
        
        std::cout << word1 << " is not palindrome!"<<endl;
    }

    
    if (isPalindrome(word2))
    {
        std::cout << word2 << " is palindrome!"<<endl;
    }
    else
    {
        std::cout << word2 << " is not palindrome!"<<endl;
    }

    if (isPalindrome(word3))
    {
        std::cout << word3 << " is palindrome!"<<endl;
    }
    else
    {
        std::cout << word3 << " is not palindrome!"<<endl;
    }

    if (isPalindrome(word4))
    {
        std::cout << word4 << " is palindrome!"<<endl;
    }
    
    else
    {
        std::cout << word4 << " is 'not' palindrome!"<<endl;
    }
}
