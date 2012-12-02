/* $Id: automap.h,v 1.1.1.1 2006/03/17 19:56:52 zicodxx Exp $ */
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
 * Prototypes for auto-map stuff.
 *
 */

#ifndef _AUTOMAP_H
#define _AUTOMAP_H

#include "player.h"

#ifdef __cplusplus
#include "segment.h"

extern int Automap_active;

extern char Marker_input[40];
extern void do_automap(int key_code);
extern void automap_clear_visited();
extern automap_visited_array_t Automap_visited;
void DropBuddyMarker(dxxobject *objp);

#define NUM_MARKERS         16
#define MARKER_MESSAGE_LEN  40

extern vms_vector MarkerPoint[NUM_MARKERS];

extern char MarkerMessage[NUM_MARKERS][MARKER_MESSAGE_LEN];
extern char MarkerOwner[NUM_MARKERS][CALLSIGN_LEN+1];
extern objnum_t  MarkerObject[NUM_MARKERS];

void InitMarkerInput();
int MarkerInputMessage(int key);
extern ubyte DefiningMarkerMessage;

#endif

#endif
