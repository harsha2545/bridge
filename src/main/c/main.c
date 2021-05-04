
/** all the includes *except* cecilia.h */
#include <stdio.h>

/** Declare component internal data, empty here. */
DECLARE_DATA {
} ;

/** Include cecilia.h. Must be included after the DECLARE_DATA */
#include <cecilia.h>

// -----------------------------------------------------------------------------
// Implementation of the 'main' boot interface.
// -----------------------------------------------------------------------------

// int main(int argc, string[] argv)
int METHOD(r, main) (void *_this, int argc, char *argv[]){

  printf("Hello, maybe you want to start adding some components now? :-) \n");
  
  return 0;
}
