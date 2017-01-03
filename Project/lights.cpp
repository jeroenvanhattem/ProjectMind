#include "lights.hpp"
#include "hwlib.hpp"
/// Lights Variables
//
/// - Booleans for headlights and backlights
/// - Pin11, blinklights 1
/// - Pin10, blinklights 2
/// - Pin9, blinklights 3
/// - Pin8, blinklights 4
/// - Pin30, forcelight 3


bool headlights = false;
bool backlights = false;

auto pin_d11 = hwlib::target::pins::d11;
auto pin_d10 = hwlib::target::pins::d10;
auto pin_d9 = hwlib::target::pins::d9;
auto pin_d8 = hwlib::target::pins::d8;

auto pin_d44 = hwlib::target::pins::d44;
auto pin_d46 = hwlib::target::pins::d46;
auto pin_d48 = hwlib::target::pins::d48;
auto pin_d50 = hwlib::target::pins::d50;

lights::lights(int state):
    state(state)
{}

void lights::switch_lights(int value){
    switch(value){
		case 0:		// All off
			// Blinklights
			hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
			hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
			hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
			hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off

			// Main lights
			hwlib::target::pin_out(pin_d50).set(0); // Set Backlight Left -> off
			hwlib::target::pin_out(pin_d48).set(0); // Set Backlight Right -> off
			hwlib::target::pin_out(pin_d10).set(0); // Set Frontlight Left -> off
			hwlib::target::pin_out(pin_d11).set(0); // Set Frontlight Right -> off       
			break;   
	
		case 1:		 // All on
			// Blinklights
			hwlib::target::pin_out(pin_d8).set(1); // Set Blink Front Left -> on
			hwlib::target::pin_out(pin_d9).set(1); // Set Blink Front Right -> on
			hwlib::target::pin_out(pin_d46).set(1); // Set Blink Back Left -> on
			hwlib::target::pin_out(pin_d44).set(1); // Set Blink Back Right -> on

			// Main lights
			hwlib::target::pin_out(pin_d50).set(1); // Set Backlight Left -> on
			hwlib::target::pin_out(pin_d48).set(1); // Set Backlight Right -> on
			hwlib::target::pin_out(pin_d10).set(1); // Set Frontlight Left -> on
			hwlib::target::pin_out(pin_d11).set(1); // Set Frontlight Right -> on         
			break;       
		
		case 2:		 // Showoff
			// On
			
			// Blinklights
			hwlib::target::pin_out(pin_d8).set(1); // Set Blink Front Left -> on
			hwlib::target::pin_out(pin_d9).set(1); // Set Blink Front Right -> on
			hwlib::target::pin_out(pin_d46).set(1); // Set Blink Back Left -> on
			hwlib::target::pin_out(pin_d44).set(1); // Set Blink Back Right -> on

			// Main lights
			hwlib::target::pin_out(pin_d50).set(1); // Set Backlight Left -> on
			hwlib::target::pin_out(pin_d48).set(1); // Set Backlight Right -> on
			hwlib::target::pin_out(pin_d10).set(1); // Set Frontlight Left -> on
			hwlib::target::pin_out(pin_d11).set(1); // Set Frontlight Right -> on   
			
			hwlib::wait_ms(300);
			
			// Off
			
			// Blinklights
			hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
			hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
			hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
			hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off

			// Main lights
			hwlib::target::pin_out(pin_d50).set(0); // Set Backlight Left -> off
			hwlib::target::pin_out(pin_d48).set(0); // Set Backlight Right -> off
			hwlib::target::pin_out(pin_d10).set(0); // Set Frontlight Left -> off
			hwlib::target::pin_out(pin_d11).set(0); // Set Frontlight Right -> off  
			break;     
		
		case 3:		 // Main
			// Blinklights
			hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
			hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
			hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
			hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off

			// Main lights
			hwlib::target::pin_out(pin_d50).set(1); // Set Backlight Left -> on
			hwlib::target::pin_out(pin_d48).set(1); // Set Backlight Right -> on
			hwlib::target::pin_out(pin_d10).set(1); // Set Frontlight Left -> on
			hwlib::target::pin_out(pin_d11).set(1); // Set Frontlight Right -> on      
			break;       
		
		case 4:		// Blink left
			for(int i = 0; i < 3; i++){
				// Blinklights
				hwlib::target::pin_out(pin_d8).set(1); // Set Blink Front Left -> off
				hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
				hwlib::target::pin_out(pin_d46).set(1); // Set Blink Back Left -> off
				hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off
				
				hwlib::wait_ms(250);
				
				hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
				hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
				hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
				hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off
				
				hwlib::wait_ms(250);     
			} 
			break; 
			
			// No main lights, because we don't want to change that situation when blinking
		
		
		case 5:		// Blink Right
			for(int i = 0; i < 3; i++){
				// Blinklights
				hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
				hwlib::target::pin_out(pin_d9).set(1); // Set Blink Front Right -> off
				hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
				hwlib::target::pin_out(pin_d44).set(1); // Set Blink Back Right -> off
				
				hwlib::wait_ms(250);
				
				hwlib::target::pin_out(pin_d8).set(0); // Set Blink Front Left -> off
				hwlib::target::pin_out(pin_d9).set(0); // Set Blink Front Right -> off
				hwlib::target::pin_out(pin_d46).set(0); // Set Blink Back Left -> off
				hwlib::target::pin_out(pin_d44).set(0); // Set Blink Back Right -> off
				
				hwlib::wait_ms(250);
			}
			break;       
			
		// No main lights, because we don't want to change that situation when blinking
			
		case 6:		// Headlights
			if(headlights == false){
				hwlib::target::pin_out(pin_d10).set(1); // Set Frontlight Left -> on
				hwlib::target::pin_out(pin_d11).set(1); // Set Frontlight Right -> on  
				headlights = true;
				
			}
			else{
				hwlib::target::pin_out(pin_d10).set(0); // Set Frontlight Left -> on
				hwlib::target::pin_out(pin_d11).set(0); // Set Frontlight Right -> on  
				headlights = false;
			}
			break;
			
		case 7:		// Backlights
			if(backlights == false){
				hwlib::target::pin_out(pin_d50).set(1); // Set Backlight Left -> on
				hwlib::target::pin_out(pin_d48).set(1); // Set Backlight Right -> on
				backlights = true;
			}
			else{
				hwlib::target::pin_out(pin_d50).set(0); // Set Backlight Left -> off
				hwlib::target::pin_out(pin_d48).set(0); // Set Backlight Right -> off 
				backlights = false;
				
			}
			break;
        case 8:     // Blink backlights
            for(int i = 0; i < 2; i++){
                hwlib::target::pin_out(pin_d50).set(1); // Set Backlight Left -> on
                hwlib::target::pin_out(pin_d48).set(1); // Set Backlight Right -> on
                
                hwlib::wait_ms(100);
                
                hwlib::target::pin_out(pin_d50).set(0); // Set Backlight Left -> on
                hwlib::target::pin_out(pin_d48).set(0); // Set Backlight Right -> on
                
                hwlib::wait_ms(100);
            }
            break;
	}
}