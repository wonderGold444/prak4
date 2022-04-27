#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	LED[0] = 0;
	LED[1] = 0;
	LED[2] = 0;
	LED[3] = 0;
	i=0;
	
}

void _CYCLIC ProgramCyclic(void)
{
	

	if(led_blink){
		if(i%2)
		{
			LED[0]=!LED[0];
		}
		if(i%4)
		{
			LED[1]=!LED[1];
		}
		if(i%6)
		{
			LED[2]=!LED[2];
		}
		if(i%8)
		{
			LED[3]=!LED[3]; 
		}
		i++;
	}
	else{
		LED[0]=BUTTON[0];
		LED[1]=BUTTON[1];
		LED[2]=BUTTON[2];
		LED[3]=BUTTON[3];
	}
}

void _EXIT ProgramExit(void)
{

}

