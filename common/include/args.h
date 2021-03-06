/*
 * Portions of this file are copyright Rebirth contributors and licensed as
 * described in COPYING.txt.
 * Portions of this file are copyright Parallax Software and licensed
 * according to the Parallax license below.
 * See COPYING.txt for license details.

THE COMPUTER CODE CONTAINED HEREIN IS THE SOLE PROPERTY OF PARALLAX
SOFTWARE CORPORATION ("PARALLAX").  PARALLAX, IN DISTRIBUTING THE CODE TO
END-USERS, AND SUBJECT TO ALL OF THE TERMS AND CONDITIONS HEREIN, GRANTS A
ROYALTY-FREE, PERPETUAL LICENSE TO SUCH END-USERS FOR USE BY SUCH END-USERS
IN USING, DISPLAYING,  AND CREATING DERIVATIVE WORKS THEREOF, SO LONG AS
SUCH USE, DISPLAY OR CREATION IS FOR NON-COMMERCIAL, ROYALTY OR REVENUE
FREE PURPOSES.  IN NO EVENT SHALL THE END-USER USE THE COMPUTER CODE
CONTAINED HEREIN FOR REVENUE-BEARING PURPOSES.  THE END-USER UNDERSTANDS
AND AGREES TO THE TERMS HEREIN AND ACCEPTS THE SAME BY USE OF THIS FILE.
COPYRIGHT 1993-1998 PARALLAX SOFTWARE CORPORATION.  ALL RIGHTS RESERVED.
*/

/*
 *
 * Prototypes for accessing arguments.
 *
 */

#pragma once

#ifdef __cplusplus
#include <cstdint>

bool InitArgs(int argc, char **argv);
extern void args_exit();

// Struct that keeps all variables used by FindArg
// Prefixes are:
//   Sys - System Options
//   Ctl - Control Options
//   Snd - Sound Options
//   Gfx - Graphics Options
//   Ogl - OpenGL Options
//   Mpl - Multiplayer Options
//   Edi - Editor Options
//   Dbg - Debugging/Undocumented Options
#if defined(DXX_BUILD_DESCENT_I) || defined(DXX_BUILD_DESCENT_II)
#include "dxxsconf.h"
#include "compiler-type_traits.h"

struct Arg
{
	int SysShowCmdHelp;
	int SysNoNiceFPS;
	int SysMaxFPS;
	int SysNoHogDir;
	const char *SysHogDir;
	int SysUsePlayersDir;
	int SysLowMem;
	const char *SysPilot;
	const char *SysRecordDemoNameTemplate;
	bool SysAutoRecordDemo;
	int SysWindow;
	int SysNoBorders;
	int SysAutoDemo;
#ifdef DXX_BUILD_DESCENT_I
	int SysNoTitles;
#endif
#ifdef DXX_BUILD_DESCENT_II
	int SysNoMovies;
#endif
	int CtlNoCursor;
	int CtlNoMouse;
	int CtlNoJoystick;
	int CtlNoStickyKeys;
	int SndNoSound;
	int SndNoMusic;
#ifdef USE_SDLMIXER
	bool SndDisableSdlMixer;
#else
	static constexpr tt::true_type SndDisableSdlMixer{};
#endif
#ifdef DXX_BUILD_DESCENT_II
	int SndDigiSampleRate;
	int GfxSkipHiresMovie;
	int GfxSkipHiresGFX;
#endif
	int GfxSkipHiresFNT;
#ifdef OGL
	int OglFixedFont;
#endif
	const char *MplUdpHostAddr;
	uint16_t MplUdpHostPort;
	uint16_t MplUdpMyPort;
#ifdef USE_TRACKER
	uint16_t MplTrackerPort;
	const char *MplTrackerAddr;
#endif
#ifdef DXX_BUILD_DESCENT_I
	int EdiNoBm;
#endif
#ifdef DXX_BUILD_DESCENT_II
	const char *EdiAutoLoad;
	int EdiSaveHoardData;
	int EdiMacData; // also used for some read routines in non-editor build
#endif
	int DbgVerbose;
	int DbgSafelog;
	int DbgNoRun;
	int DbgForbidConsoleGrab;
	int DbgRenderStats;
	const char *DbgAltTex;
	const char *DbgTexMap;
	int DbgShowMemInfo;
	int DbgNoDoubleBuffer;
	int DbgNoCompressPigBitmap;
	int DbgBpp;
#ifdef OGL
	int DbgUseOldTextureMerge;
	int DbgGlIntensity4Ok;
	int DbgGlLuminance4Alpha4Ok;
	int DbgGlRGBA2Ok;
	int DbgGlReadPixelsOk;
	int DbgGlGetTexLevelParamOk;
#else
	int DbgSdlHWSurface;
	int DbgSdlASyncBlit;
#endif
};

extern struct Arg GameArg;

static inline const char *PLAYER_DIRECTORY_STRING(const char *s, const char *f) __attribute_format_arg(2);
static inline const char *PLAYER_DIRECTORY_STRING(const char *s, const char *)
{
	return (GameArg.SysUsePlayersDir) ? s : (s + sizeof("Players/") - 1);
}
#define PLAYER_DIRECTORY_STRING(S)	((PLAYER_DIRECTORY_STRING)("Players/" S, S))
#endif

#endif
