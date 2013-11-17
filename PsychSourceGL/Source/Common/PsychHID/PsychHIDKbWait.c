/*
	PsychtoolboxGL/Source/Common/PsychHID/PsychHIDWait.c		
  
	PROJECTS: 
	
		PsychHID only.
  
	PLATFORMS:  
	
		Only OS X for now.  
  
	AUTHORS:
	
		Allen.Ingling@nyu.edu		awi 
		rwoods@ucla.edu				rpw
      
	HISTORY:
		6/5/03  awi		Created.
		4/7/05	awi		Added a wait to to the polling loop. 
		12/17/09 rpw	Added support for keypads
  
	NOTES:
	
		We add a compile flag to the project MachTimebase settings: "-Wno-long-double" turns off a warning caused by using type long double.  
		The warning is:
			use of `long double' type; its size may change in a future release (Long double usage is reported only once for each file.
			To disable this warning, use -Wno-long-double.)
			
		Turning off the warning is probably ok because we do not depend on long doubles being any particular size or precision; if does change,
		that's not going to break anything.  
			
		The -Wno-long-double flag is appended to the project setting "Other Warning Flags".

		---
    

*/

#include "PsychHID.h"
#if PSYCH_SYSTEM == PSYCH_OSX

#define NUMDEVICEUSAGES 7

static char useString[]= "secs=PsychHID('KbWait', [deviceNumber])";
static char synopsisString[] = 
		"THIS FUNCTION IS NO LONGER SUPPORTED AND CAN NOT BE USED! USE KbWait INSTEAD!\n\n"
        "Scan a keyboard or keypad device and return wait for a keypress "
        "By default the first keyboard device (the one with the lowest device number) is "
        "scanned. If no keyboard is found, the first keypad device is "
        "scanned.  Optionally, the device number of any keyboard or keypad may be specified "
        "The PsychHID('KbWait') implements the KbCheck command a provided by the  OS 9 Psychtoolbox."
        "KbWait is defined in the OS X Psychtoolbox and invokes PsychHID('KbWait').  For backwards "
        "compatability with earlier Psychtoolbox we recommend using KbWait instead of PsychHID('KbWait'). ";
        
static char seeAlsoString[] = "";

PsychError PSYCHHIDKbWait(void) 
{
    PsychPushHelp(useString, synopsisString, seeAlsoString);
    if(PsychIsGiveHelp()){PsychGiveHelp();return(PsychError_none);};

    // We don't support this deprecated function anymore:
    PsychErrorExitMsg(PsychError_unimplemented, "This function is no longer supported by the 64-Bit version of PsychHID.");
    return(PsychError_none);
}

#endif
