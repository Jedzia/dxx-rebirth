/* $Id: slew.h,v 1.1.1.1 2006/03/17 19:56:35 zicodxx Exp $ */
/*
THE COMPUTER CODE CONTAINED HEREIN IS THE SOLE PROPERTY OF PARALLAX
SOFTWARE CORPORATION ("PARALLAX").  PARALLAX, IN DISTRIBUTING THE CODE TO
END-USERS, AND SUBJECT TO ALL OF THE TERMS AND CONDITIONS HEREIN, GRANTS A
ROYALTY-FREE, PERPETUAL LICENSE TO SUCH END-USERS FOR USE BY SUCH END-USERS
IN USING, DISPLAYING,  AND CREATING DERIVATIVE WORKS THEREOF, SO LONG AS
SUCH USE, DISPLAY OR CREATION IS FOR NON-COMMERCIAL, ROYALTY OR REVENUE
FREE PURPOSES.  IN NO EVENT SHALL THE END-USER USE THE COMPUTER CODE
CONTAINED HEREIN FOR REVENUE-BEARING PURPOSES.  THE END-USER UNDERSTANDS
AND AGREES TO THE TERMS HEREIN AND ACCEPTS THE SAME BY USE OF THIS FILE.
COPYRIGHT 1993-1999 PARALLAX SOFTWARE CORPORATION.  ALL RIGHTS RESERVED.
*/

/*
 *
 * Prototypes, etc., for slew system
 *
 */


#ifndef _SLEW_H
#define _SLEW_H

#include "object.h"

#ifdef __cplusplus
extern "C" {
#endif

//from slew.c

#if 1   //ndef RELEASE  //kill error on RELEASE build

void slew_init(dxxobject *obj);                // say this is slew obj
int slew_stop(void);                            // Stops object
void slew_reset_orient();                   // Resets orientation
int slew_frame(int dont_check_keys);        // Does slew frame

#else

#define slew_init(obj)
#define slew_stop(obj)
#define slew_reset_orient()
#define slew_frame(dont_check_keys)

#endif

#ifdef __cplusplus
}
#endif

#endif /* _SLEW_H */
