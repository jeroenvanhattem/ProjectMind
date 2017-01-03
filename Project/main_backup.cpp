/// @file
//#include "hwlib.hpp" 
#include "sam.h"
#include "wheels.hpp"
#include "infrared.hpp"

/// Main function
//
///The main function where the watchdog is being killed, the object IR from class infrared is being made and initialized. 
/// As long as the program lives, it checks for infrared input
int main(void){
	/// kill Watchdog
    //
    /// Killing the watchdog, so the program doesn't think it crashes
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	/// Creating infrared object
    //
    /// Created infrared object ir, which is directly initialized by init(); 
    /// infrared(int state, int fl1, int fl2, int fl3); 
    /// fl1, fl2 and fl3 must be in the D_pin section
	infrared ir(1, 1, 3, 9);
	ir.init();
    
    /// Infinite for loop
    //
    /// The infrared::drive function receives an integer value from the infrared::check function, which returns a bitpatron converted to a integervalue
    
	for(;;){
		ir.drive(ir.check(28));
	}

}