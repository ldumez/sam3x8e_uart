
#ifndef class_reg_uart_rhr_h
#define class_reg_uart_rhr_h

#include "../include/class_reg_32.h"

class class_reg_uart_rhr : public class_reg_32
{
  public:

    class_reg_uart_rhr();

    void write(int data);

};

#endif /* reg_uart_rhr_h */
