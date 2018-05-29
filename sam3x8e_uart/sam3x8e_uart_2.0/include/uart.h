#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"

SC_MODULE(uart)                // declare add sc_module
{
public:
  uart();
  ~uart();

  void  write (int data, int offset);
  int   read  (int offset);
  int   reset ();

private:
  class_reg_uart_cr  	reg_uart_cr;
  class_reg_uart_mr 	reg_uart_mr;
  class_reg_uart_ier 	reg_uart_ier;
  class_reg_uart_idr 	reg_uart_idr;
  class_reg_32        reg_uart_thr;
  class_reg_32      	reg_uart_brgr;
  class_reg_uart_rhr  reg_uart_rhr;

};
