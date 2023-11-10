
#include <stdint.h>


void  reset_handler  (void);
void Default_Handler (void);
void  NMI            (void) __attribute__((weak, alias ("Default_Handler")));;
void  Hard_Fault     (void) __attribute__((weak, alias("Default_Handler")));;
void  MemManage      (void) __attribute__((weak, alias("Default_Handler")));;
void  BusFault       (void) __attribute__((weak, alias("Default_Handler")));;
void  Usage_Fault    (void) __attribute__((weak, alias("Default_Handler")));;
void  SV_Call        (void) __attribute__((weak, alias("Default_Handler")));;



//using extern class for functions and symbols to make linker script links without errors 
extern int main(void);
extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
extern uint32_t _stack_top;



uint32_t vectors  [] __attribute__((section(".vectors"))) = {
	
(uint32_t)  &_stack_top,
(uint32_t)	&reset_handler,
(uint32_t)	&NMI,
(uint32_t)	&Hard_Fault,
(uint32_t)	&MemManage,
(uint32_t)	&BusFault,
(uint32_t)	&Usage_Fault,
(uint32_t)	&SV_Call
};

int j;

void  reset_handler  (void){
	
	//copying from flash to ram
	unsigned int data_size  = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* p_src = (unsigned char*)&_E_text;
	unsigned char* p_dst = (unsigned char*)&_S_data;
	
	for(j = 0 ; j<data_size; j++){
		
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++); 
		
	}
	
	//Initilize .bss with zeros in ram s 
	unsigned int bss_size  = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	
	p_dst = (unsigned char*)&_S_bss;
	
		for(j = 0 ; j<bss_size; j++){
		
		*((unsigned char*)p_dst++) = (unsigned char)0; 
		
	}
	//Jumping to the main()
	
	
	main();
	
}



	void Default_Handler (void){
	reset_handler();
	}