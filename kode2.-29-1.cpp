/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/
#include <stdio.h>
#include <string.h>

int main ()
{
  char key[] = "karenabelajar.blogspot.com";
  char buffer[80];
  do {
     printf ("Apa nama website ini? ");
     fflush (stdout);
     scanf ("%79s",buffer);
  } while (strcmp (key,buffer) != 0);
  puts ("jawaban benar!");
  return 0;
}
