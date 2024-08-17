////////////////////////////////////////////////////////////////////////////////
///   _____
///  |  ___|__   ___ _   _ ___
///  | |_ / _ \ / __| | | / __|        Time tracker and productivity booster
///  |  _| (_) | [__| |_| \__ \
///  |_|  \___/ \___|\___/|___/        https://github.com/metayeti/focuspocus
///           ____
///          |  _ \ ___   ___ _   _ ___ 
///          | |_) / _ \ / __| | | / __|
///          |  __/ (_) | (__| |_| \__ \       ( version 0.0.3 dev )
///          |_|   \___/ \___|\___/|___/
///
///
///  Licensed under GPL3 ( https://www.gnu.org/licenses/gpl-3.0.en.html )
///  Based on the wxWidgets library ( https://www.wxwidgets.org/ )
///
///  Copyright (c) 2024 Danijel Durakovic
///
/// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
///
///  focuspocus.h
///  ---
///  Main headerfile for FocusPocus. Defines system-level globals.
///
////////////////////////////////////////////////////////////////////////////////

#ifndef FOCUSPOCUS_H_
#define FOCUSPOCUS_H_

#if defined(_WIN32) || defined(__CYGWIN__)
	#define KIWI_SYSTEM_WINDOWS
#elif defined(__linux__)
	#define FP_SYSTEM_LINUX
#elif defined(__APPLE__)
	#define FP_SYSTEM_MACOS
#endif

#if defined(DEBUG) || defined(_DEBUG)
	#define FP_DEBUG_BUILD
#endif

#if defined(FP_SYSTEM_WINDOWS)
	// disable annoying warnings on VS
	#pragma warning(disable: 4996)
	#pragma warning(disable: 26812)
	#pragma warning(disable: 6011)
	#pragma warning(disable: 26812)
	#pragma warning(disable: 26451)
	#pragma warning(disable: 26495)
	#pragma warning(disable: 26439)
#endif

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

// ~~~ VLD ~~~ uncomment to enable leak detection
//#include "vld.h"

#endif // FOCUSPOCUS_H_
