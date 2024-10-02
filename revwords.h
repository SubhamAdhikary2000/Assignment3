#ifndef REVERSE_H
#define REVERSE_H

// Include necessary libraries
#include <ctype.h>  // For isalpha function
#include <string.h> // For strlen function

// Function prototypes
extern void ReverseSubstring(char ss[], int start, int end);
/*find_word_start(s, len, i) takes a string s of length len, and 
  an index i (which must be strictly less than len). 
  It then returns the index k which is the starting position of
  the next word beginning at position i or later. 
  If no such index exists, then it should return -1.
*/
extern int  FindNextStart(char ss[], int len, int i);
/* find_word_end(s, len, i) takes a string s of length len, and 
   an index i (which must be strictly less than len). 
   It returns the first index k past the end of the word starting
   at i. 
*/
extern int  FindNextEnd(char ss[], int len, int i);
/* reverse_words(s) takes a string s, and reverses all of the
   words in it. Here, a "word" is defined as a contiguous sequence of alphabetic
   characters.
*/
extern void ReverseWords(char ss[]);

#endif
