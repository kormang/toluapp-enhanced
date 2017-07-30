#include <exception>
/*
 Small example with two classes to
 demonstrating additions to tolua++ code generator.
*/

class KlassA;

void deleteKlassA(KlassA* klassA);

class KlassA
{
public:
  int getSomeInt();
};

class KlassB
{
public:
  KlassA createKlassA(int param) throw (std::exception);
};
