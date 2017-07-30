typedef struct A
{
  int a;
  int b;

  //
} structA;

// Does not return pointer for demonstration
// of optimized returning of values.
structA createStructA();

void freeStructA(structA* sA);
