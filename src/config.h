/*-------------------------------------------------------------------------
 *
 * config.h
 *	  load/save configuration
 *
 * Portions Copyright (c) 2017-2018 Pavel Stehule
 *
 * IDENTIFICATION
 *	  src/config.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef PSPG_CONFIG_H
#define PSPG_CONFIG_H

#include <stdbool.h>

typedef struct
{
	char   *pathname;
	bool	ignore_case;
	bool	ignore_lower_case;
	bool	no_sound;
	bool	no_mouse;
	bool	less_status_bar;
	bool	no_highlight_search;
	bool	no_highlight_lines;
	bool	force_uniborder;
	bool	force8bit;
	bool	no_commandbar;
	bool	no_topbar;
	bool	show_rownum;
	bool	no_cursor;
	bool	tabular_cursor;
	int		theme;
	int		freezed_cols;
} Options;

extern bool save_config(char *path, Options *opts);
extern bool load_config(char *path, Options *opts);

#endif
