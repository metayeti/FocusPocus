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

#ifndef FP_APPLICATION_H_
#define FP_APPLICATION_H_

namespace fp
{
	class Application : public wxApp
	{
	public:
		virtual bool OnInit() override;
	};
}

#endif // FP_APPLICATION_H_


