#pragma once

//ifdef KEYBOARD_diykeyboards_partycl_rev1_6x4
//    #include "6x4.h"
//#elif KEYBOARD_handwired_dactyl_manuform_6x5
//    #include "6x5.h"
//#endif

#include "quantum.h"
#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif
