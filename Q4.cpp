#include <iostream>
#include <stdlib.h>
#include <time.h>
#inlcude "head.h"
using namespace std;


struct output Q4(struct input)
{
  int x,y;
  struct output out;
  //10 *10 range of coordinates
  x=rand()%10+1;
  y=rand()%10+1;
  cout<<x<<y;
  return out;
}
