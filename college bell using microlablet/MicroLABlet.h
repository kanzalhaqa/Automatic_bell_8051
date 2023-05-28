/*  BYTE Registers  */
sfr P0    = 0x80;
sfr P1    = 0x90;
sfr P2    = 0xA0;
sfr P3    = 0xB0;
sfr PSW   = 0xD0;
sfr ACC   = 0xE0;
sfr B     = 0xF0;
sfr SP    = 0x81;
sfr DPL   = 0x82;
sfr DPH   = 0x83;
sfr PCON  = 0x87;
sfr TCON  = 0x88;
sfr TMOD  = 0x89;
sfr TL0   = 0x8A;
sfr TL1   = 0x8B;
sfr TH0   = 0x8C;
sfr TH1   = 0x8D;
sfr IE    = 0xA8;
sfr IP    = 0xB8;
sfr SCON  = 0x98;
sfr SBUF  = 0x99;

/*  8052 Extensions */
sfr T2CON  = 0xC8;
sfr T2MOD  = 0xC9;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;

/*  89x5xxRD2 Extensions */
sfr IPA   = 0xF8;
sfr IEA   = 0xE8;
sfr SADDR = 0xA9;
sfr SADEN = 0xB9;
sfr SPSR  = 0xAA;
sfr AUXR1 = 0xA2;
sfr AUXR  = 0x8E;
sfr WDTD  = 0x85;
sfr WDTC  = 0xC0;
sfr SPDR  = 0x86;
sfr SFCF  = 0xB1;
sfr SFCM  = 0xB2;
sfr SFAL  = 0xB3;
sfr SFAH  = 0xB4;
sfr SFDT  = 0xB5;
sfr SFST  = 0xB6;
sfr IPH   = 0xB7;
sfr SPCR  = 0xD5;
sfr IPAH  = 0xF7;
sfr P4    = 0xA5;
sfr XICON = 0xAE;

/*  PCA   */
sfr CCON  = 0xD8;
sfr CMOD  = 0xD9;
sfr CL    = 0XE9;
sfr CH    = 0xF9;

sfr CCAPM0= 0XDA;
sfr CCAPM1= 0XDB;
sfr CCAPM2= 0XDC;
sfr CCAPM3= 0XDD;
sfr CCAPM4= 0XDE;

sfr CCAP0L= 0XEA;
sfr CCAP1L= 0XEB;
sfr CCAP2L= 0XEC;
sfr CCAP3L= 0XED;
sfr CCAP4L= 0XEE;

sfr CCAP0H= 0XFA;
sfr CCAP1H= 0XFB;
sfr CCAP2H= 0XFC;
sfr CCAP3H= 0XFD;
sfr CCAP4H= 0XFE;



/*  BIT Registers  */
/*  PSW  */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0; 

/*  TCON  */
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

/*  IE  */
sbit EA    = IE^7;
sbit EC    = IE^6;
sbit ET2   = IE^5; 
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PPC   = IP^6;
sbit PT2   = IP^5;
sbit PS    = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  P3  */
sbit RD    = P3^7;
sbit WR    = P3^6;
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*  SCON  */
sbit SM0   = SCON^7;
sbit FE    = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

/*  P1  */
sbit CEX4  = P1^7;
sbit CEX3  = P1^6;
sbit CEX2  = P1^5;
sbit CEX1  = P1^4;
sbit CEX0  = P1^3;
sbit ECI   = P1^2;
sbit T2EX  = P1^1; 
sbit T2    = P1^0; 
             
/*  T2CON  */
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit TR2    = T2CON^2;
sbit C_T2   = T2CON^1;
sbit CP_RL2 = T2CON^0;

/*   CCON   */
sbit CF     = CCON^7;
sbit CR     = CCON^6;
sbit CCF4   = CCON^4;
sbit CCF3   = CCON^3;
sbit CCF2   = CCON^2;
sbit CCF1   = CCON^1;
sbit CCF0   = CCON^0;

/*   WDTC   */
sbit WDOUT  = WDTC^4;
sbit WDRE   = WDTC^3;
sbit WDTS   = WDTC^2;
sbit WDT    = WDTC^1;
sbit SWDT   = WDTC^0;

/*   IEA    */
sbit EBO    = IEA^3;

/*   IPH    */
sbit PBO    = IPA^3;


// 1 milisecond delay program
timer_lowerbyte=0x61;
timer_higherbyte=0xFC;
timer_enable=1;
timer_disable=0;
timer_reset=0;
timer_count;
void delay(unsigned int time_delay_milisecond)              			
{
	TMOD=0x10;								//set the timer#1 in mode#1	
	for (timer_count =0; timer_count<time_delay_milisecond; timer_count ++)                 
	{		
		TL1=timer_lowerbyte;                     	
		TH1=timer_higherbyte;                    
		TR1=timer_enable;                         
		while(TF1==0);         //monitoring the timer flag for timer overflow
	  TR1=timer_disable;                          
	  TF1=timer_reset; 
  }
}


