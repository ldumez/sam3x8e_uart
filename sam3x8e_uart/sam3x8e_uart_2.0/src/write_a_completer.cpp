// WRITE
// data = register value to write

class_reg_uart_cr  	reg_uart_cr;
class_reg_uart_mr 	reg_uart_mr;
class_reg_uart_ier 	reg_uart_ier;
class_reg_uart_idr 	reg_uart_idr;
class_reg_uart_thr  reg_uart_thr;
class_reg_uart_brgr	reg_uart_brgr;


switch(offset) {
	case 0x0000 : // Control Register
				reg_uart_cr.rstrx  = ( data & reg_uart_mr.mask_rstrx ) >> reg_uart_mr.start_rstrx;
        reg_uart_cr.rsttx  = ( data & reg_uart_mr.mask_rsttx ) >> reg_uart_mr.start_rsttx;
        reg_uart_cr.rxen  = ( data & reg_uart_mr.mask_rxen ) >> reg_uart_mr.start_rxen;
        reg_uart_cr.rxdis  = ( data & reg_uart_mr.mask_rxdis ) >> reg_uart_mr.start_rxdis;
        reg_uart_cr.txen  = ( data & reg_uart_mr.mask_txen ) >> reg_uart_mr.start_txen;
        reg_uart_cr.txdis  = ( data & reg_uart_mr.mask_txdis ) >> reg_uart_mr.start_txdis;
        reg_uart_cr.rststa  = ( data & reg_uart_mr.mask_rststa ) >> reg_uart_mr.start_rststa;
		break;

	case 0x0004 : // Mode Register
				reg_uart_mr.par = ( data & reg_uart_mr.mask_par ) >> reg_uart_mr.start_par;
				reg_uart_mr.chmode	= ( data & reg_uart_mr.mask_chmode ) >> reg_uart_mr.start_chmode;
		break;

	case 0x0008 : // Interrupt Enable Register
			reg_uart_ier.rxrdy = ( data & reg_uart_ier.mask_rxrdy ) >> reg_uart_ier.start_rxrdy;
			reg_uart_ier.txrdy = ( data & reg_uart_ier.mask_txrdy ) >> reg_uart_ier.start_txrdy;
			reg_uart_ier.endrx = ( data & reg_uart_ier.mask_endrx ) >> reg_uart_ier.start_endrx;
			reg_uart_ier.endtx = ( data & reg_uart_ier.mask_endtx ) >> reg_uart_ier.start_endtx;
			reg_uart_ier.ovre = ( data & reg_uart_ier.mask_ovre ) >> reg_uart_ier.start_ovre;
			reg_uart_ier.frame = ( data & reg_uart_ier.mask_frame ) >> reg_uart_ier.start_frame;
			reg_uart_ier.pare = ( data & reg_uart_ier.mask_pare ) >> reg_uart_ier.start_pare;
			reg_uart_ier.txempty = ( data & reg_uart_ier.mask_txempty ) >> reg_uart_ier.start_txempty;
			reg_uart_ier.txbufe = ( data & reg_uart_ier.mask_txbufe ) >> reg_uart_ier.start_txbufe;
			reg_uart_ier.rxbuff = ( data & reg_uart_ier.mask_rxbuff ) >> reg_uart_ier.start_rxbuff;
		break;

	case 0x000C : // Interrupt Disable Register
			reg_uart_idr.rxrdy = ( data & reg_uart_idr.mask_rxrdy ) >> reg_uart_idr.start_rxrdy;
			reg_uart_idr.txrdy = ( data & reg_uart_idr.mask_txrdy ) >> reg_uart_idr.start_txrdy;
			reg_uart_idr.endrx = ( data & reg_uart_idr.mask_endrx ) >> reg_uart_idr.start_endrx;
			reg_uart_idr.endtx = ( data & reg_uart_idr.mask_endtx ) >> reg_uart_idr.start_endtx;
			reg_uart_idr.ovre = ( data & reg_uart_idr.mask_ovre ) >> reg_uart_idr.start_ovre;
			reg_uart_idr.frame = ( data & reg_uart_idr.mask_frame ) >> reg_uart_idr.start_frame;
			reg_uart_idr.pare = ( data & reg_uart_idr.mask_pare ) >> reg_uart_idr.start_pare;
			reg_uart_idr.txempty = ( data & reg_uart_idr.mask_txempty ) >> reg_uart_idr.start_txempty;
			reg_uart_idr.txbufe = ( data & reg_uart_idr.mask_txbufe ) >> reg_uart_idr.start_txbufe;
			reg_uart_idr.rxbuff = ( data & reg_uart_idr.mask_rxbuff ) >> reg_uart_idr.start_rxbuff;
		break;

	case 0x001C : // Transmit Holding Register
			reg_uart_thr.txchr  = ( data & reg_uart_thr.mask_txchr ) >> reg_uart_thr.start_txchr;
		break;

	case 0x0020 : // Baud Rate Generator Register
			reg_uart_brgr.cd  = ( data & reg_uart_brgr.mask_cd ) >> reg_uart_brgr.start_cd;
		break;

	case default : // Not Applicable => Read-only registers
		// 0x0010 : Interrupt Mask Register
		// 0x0014 : Status Register
		// 0x0018 : Receive Holding Register
		break;
}
