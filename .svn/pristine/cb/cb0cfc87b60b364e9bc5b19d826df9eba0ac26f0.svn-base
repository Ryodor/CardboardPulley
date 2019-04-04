#include <stdio.h>

#define length ((unsigned char)(-1))

typedef int (*hash_t)( int );

int foo( int );
int bar( int );

hash_t hashtable[length] = {['d']=foo , ['p']=bar};

int main( void )
{
  int choix = 'd';
  int nb = 10;

  hashtable[ choix ]( nb );
  printf("\n");
  return 0;
}

int foo( int n )
{
  
  printf("yolololololollo");
}

int bar( int n )
{
  printf("dickButt");
}
