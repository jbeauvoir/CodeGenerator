#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "SetLimits.h"
#include "SyntacticalAnalyzer.h"

using namespace std;

int main (int argc, char * argv[])
{
  if (argc < 2) {
      printf ("format: %s <filename>\n", argv[0]);
      exit (1);
  }


  SetLimits ();
  SyntacticalAnalyzer parse (argv[1]);

  return 0;
}
