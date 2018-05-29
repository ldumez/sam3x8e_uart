#include "../include/uart.h"

uart::uart():
reg_uart_cr(class_reg_uart_cr()),
reg_uart_mr(class_reg_uart_mr()),
reg_uart_ier(class_reg_uart_ier()),
reg_uart_idr(class_reg_uart_idr()),
reg_uart_thr(class_reg_32()),
reg_uart_brgr(class_reg_32()),
reg_uart_rhr(class_reg_uart_rhr())
{
}

void uart::write(int data, int offset){
  switch(offset) {
    case 0x0000 : // Control Register
      reg_uart_cr.write(data);
    break;

    case 0x0004 : // Mode Register
      reg_uart_mr.write(data);
    break;

    case 0x0008 : // Interrupt Enable Register
      reg_uart_ier.write(data);
    break;

    case 0x000C : // Interrupt Disable Register
      reg_uart_idr.write(data);
    break;

    case 0x001C : // Transmit Holding Register
      reg_uart_thr.write(data);
    break;

    case 0x0020 : // Baud Rate Generator Register
      reg_uart_brgr.write(data);
    break;

    default : // Not Applicable => Read-only registers
    // 0x0010 : Interrupt Mask Register
    // 0x0014 : Status Register
    // 0x0018 : Receive Holding Register
    break;
  }
}
