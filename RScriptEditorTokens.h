/*
 *  R.app : a Cocoa front end to: "R A Computer Language for Statistical Data Analysis"
 *  
 *  R.app Copyright notes:
 *                     Copyright (C) 2004-5  The R Foundation
 *                     written by Stefano M. Iacus and Simon Urbanek
 *
 *                  
 *  R Copyright notes:
 *                     Copyright (C) 1995-1996   Robert Gentleman and Ross Ihaka
 *                     Copyright (C) 1998-2001   The R Development Core Team
 *                     Copyright (C) 2002-2004   The R Foundation
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  A copy of the GNU General Public License is available via WWW at
 *  http://www.gnu.org/copyleft/gpl.html.  You can also obtain it by
 *  writing to the Free Software Foundation, Inc., 59 Temple Place,
 *  Suite 330, Boston, MA  02111-1307  USA.
 *
 *  RScriptEditorTokens.h
 *
 *  Created by Hans-J. Bibiko on 15/02/2011.
 *
 *  This file defines all the tokens used for syntax highlighting R code
 *  via a lexer.
 *
 */

#define RPT_DOUBLE_QUOTED_TEXT   1
#define RPT_SINGLE_QUOTED_TEXT   2
#define RPT_COMMENT              3
#define RPT_BACKTICK_QUOTED_TEXT 4
#define RPT_RESERVED_WORD        5
#define RPT_WHITESPACE           6
#define RPT_NUMERIC              7
#define RPT_VARIABLE             8
#define RPT_WORD                 9
#define RPT_OTHER               10
