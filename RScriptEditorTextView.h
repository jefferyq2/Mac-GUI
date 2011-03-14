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
 *  RScriptEditorTextView.h
 *
 *  Created by Hans-J. Bibiko on 15/02/2011.
 *
 */

#import <Cocoa/Cocoa.h>
#import "RTextView.h"
#import "Preferences.h"
#import "PreferenceKeys.h"
#import "RegexKitLite.h"
#import "NoodleLineNumberView.h"
#import "REditorToolbar.h"

#define R_TEXT_SIZE_TRIGGER_FOR_PARSING_PARTLY 10000

@interface RScriptEditorTextView : RTextView <PreferencesDependent>
{

	IBOutlet NSScrollView *scrollView;

	NSUserDefaults *prefs;

	NSColor *shColorNormal;
	NSColor *shColorString;
	NSColor *shColorNumber;
	NSColor *shColorKeyword;
	NSColor *shColorComment;
	NSColor *shColorIdentifier;

	id editorToolbar;
	NoodleLineNumberView *theRulerView;

	BOOL lineNumberingEnabled;
	BOOL syntaxHighlightingEnabled;
	BOOL argsHints;
	BOOL lineWrappingEnabled;
	BOOL deleteBackward;
	BOOL showMatchingBraces;
	BOOL startListeningToBoundChanges;

	int currentHighlight;
	double braceHighlightInterval; // interval to flash brace highlighting for

	NSTextStorage *theTextStorage;

	NSDictionary *highlightColorAttr;
}

- (void)setTabStops;

- (void)setDeleteBackward:(BOOL)delBack;
- (void)doSyntaxHighlighting;
- (void)highlightCharacter:(int)pos;
- (void)resetHighlights;
- (void)resetBackgroundColor:(id)sender;


- (void)updatePreferences;

@end
