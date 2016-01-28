#include <systemc.h>
SC_MODULE(INV)
{
  sc_in<bool> a;  // input pin a  // input pin b
  sc_out<bool> o; // output pin o
  SC_CTOR(INV)    // the ctor
    {
      SC_METHOD(or_process);
      sensitive << a ;
    }
  void or_process() {
    o.write(!a.read() );
  }
};
