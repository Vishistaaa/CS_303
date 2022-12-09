#include <iostream>

#include <string>

using namespace std;

bool isPalindrome(std::string word)
{
    
    if (word.length() <= 1)
    {
     while(true)
     {
        return true;
        
        break;
     }
        
    }

    if (word[0] == word[word.length() - 1])
    {
      while(true)
      {
        return isPalindrome(word.substr(1, word.length() - 2));
          
        break;
        
      }
    }
    return false;
}