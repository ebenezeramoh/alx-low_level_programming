#include "main.h"
/**
 * print_alphabet_x10 - prints lower alphabets using 10x
 * Return: - Always return(0)
 *
 */
void print_alphabet_x10(void) {
  int i, j;
  char c;
  
  for (i = 0; i < 10; i++) {
    c = 'a';
    for (j = 0; j < 26; j++) {
      _putchar(c);
      c++;
    }
    _putchar('\n');
  }
}
