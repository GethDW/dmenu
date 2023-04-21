/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_gray1[]  = "#222222";
static const char col_gray2[]  = "#444444";
static const char col_gray3[]  = "#bbbbbb";
static const char col_gray4[]  = "#eeeeee";
static const char col_pink[]   = "#ff79c6";
static const char col_cyan[]   = "#8be9fd";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray3,  col_gray1},
	[SchemeSel]  = { col_gray1,  col_pink },
	[SchemeOut]  = { col_cyan,   col_gray1 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
