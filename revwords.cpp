#include <iostream>
#include "revwords.h"
using namespace std;
/*This Function will reverse the substring from index start to
  index end.Just swap the characters from the beginning of the
  substring with characters at the end until we meet in the middle
*/
void ReverseSubstring(char str[], int start, int end) 
{
	while (start < end) 
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
/*This function finds the start of the next word (a contiguous
  sequence of alphabetic characters) beginning at or after position
  isalpha() function checks whether a character is an alphabet
  (a to z and A to Z) or not.If a character passed to isalpha()
  is an alphabet, it returns a non-zero integer, if not it
  returns 0.
*/
int FindNextStart(char str[], int length, int i)
{
    while (i < length && !isalpha(str[i]))
    {
        i++;
    }
    /*If we found a word,return its start index,otherwise
    return -1
    */
    return (i < length) ? i : -1;
}
/*This function finds the end of the current word starting
  at position i. The end of a word is defined as the first
  non-alphabetic character after the word.
*/
int FindNextEnd(char str[], int len, int i)
{
    while (i < len && isalpha(str[i]))
    {
        i++;
    }
    /*Return the index of the first non-alphabetic character
      after the word
    */
    return i;
}
/*This function will reverse all the words in the string. We
  use the helper functions find_next_start, find_next_end,
  and reverse_substring to locate and reverse each word.
*/
void ReverseWords(char s[]) {
    int len = strlen(s);
    int start = 0;
    while (start < len)
    {
        start = FindNextStart(s, len, start);
        if (start == -1) break;
        int end = FindNextEnd(s, len, start) - 1;
        ReverseSubstring(s, start, end);
        start = end + 1;
    }
}


int main() {
    char str[] = "University of Cambridge!";
    ReverseWords(str);
    cout << str << endl; // Output: "ytisrevinU fo egdirbmaC!"
    return 0;
}
