#include "stdio.h"

// where is the LED connected
// Port : A
// Pin  : 5

#define PERIF_BASE 				(0x40000000UL)
#define AHB1PERIF_OFFSET 		(0x00020000UL)
#define AHB1PERIF_BASE			(PERIF_BASE + AHB1PERIF_OFFSET)
#define GPIOA_OFFSET			(0x0000UL)

#define GPIOA_BASE 				(AHB1PERIF_BASE + GPIOA_OFFSET)

#define RCC_OFFSET 				(0x3800UL)
#define RCC_BASE				(AHB1PERIF_BASE + RCC_OFFSET)

#define AHB1EN_R_OFFSET			(0x30UL)
#define RCC_AHB1EN_R			(RCC_BASE + AHB1EN_R_OFFSET)

#define MODE_R_OFFSET			(0x00UL)
#define GPIOA_MODE_R			(GPIOA_BASE + MODE_R_OFFSET)

#define GPIOAEN					(1UL << 0)




int main()
{

	printf("Embedded Systems Bare-Metal Programming\n");


	return 0;

}
