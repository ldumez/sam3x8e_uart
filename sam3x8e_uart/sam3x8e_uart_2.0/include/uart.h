#include <iostream>
#include "class_reg_uart_mr.h"
#include "class_reg_uart_sr.h"
#include "class_reg_uart_cr.h"
#include "class_reg_uart_idr.h"
#include "class_reg_uart_imr.h"
#include "class_reg_uart_ier.h"
#include "class_reg_uart_rhr.h"
#include "class_reg_32.h"

class uart                // declare add sc_module
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
