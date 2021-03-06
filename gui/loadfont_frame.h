/*
 * Copyright (c) 1997 - 2001 Hansj�rg Malthaner
 *
 * This file is part of the Simutrans project under the artistic licence.
 * (see licence.txt)
 */

#ifndef gui_loadsave_frame_h
#define gui_loadsave_frame_h

#ifdef USE_FREETYPE
#include "../gui/gui_theme.h"
#include "../simsys.h"

#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H
#include FT_TRUETYPE_TABLES_H
#endif

#include "simwin.h"
#include "savegame_frame.h"

#include "components/action_listener.h"
#include "components/gui_button.h"
#include "components/gui_numberinput.h"

#include "../tpl/stringhashtable_tpl.h"
#include <string>


class loadfont_frame_t : public savegame_frame_t
{
private:
#ifdef USE_FREETYPE
	FT_Library ft_library;
#endif
	static bool use_unicode;

protected:
	static std::string old_fontname;
	static uint8 old_linespace;

	button_t unicode_only;
	gui_numberinput_t fontsize;

	/**
	 * Action that's started with a button click
	 * @author Hansj�rg Malthaner
	 */
	virtual bool item_action (const char *filename);
	virtual bool ok_action   (const char *fullpath);
	virtual bool cancel_action(const char *);

	// returns extra file info
	virtual const char *get_info(const char *fname);

	// sort with respect to info, which is date
	virtual bool compare_items ( const dir_entry_t & entry, const char *info, const char *);

	virtual bool check_file( const char *filename, const char *suffix ) OVERRIDE;

public:
	/**
	* Set the window associated helptext
	* @return the filename for the helptext, or NULL
	* @author Hj. Malthaner
	*/
	virtual const char *get_help_filename() const { return "load_font.txt"; }

	loadfont_frame_t();

	virtual void fill_list() OVERRIDE;

	virtual void draw(scr_coord pos, scr_size size) OVERRIDE;

	uint32 get_rdwr_id( void ) { return magic_font; }
	void rdwr( loadsave_t *file );

	virtual bool action_triggered(gui_action_creator_t *, value_t v) OVERRIDE;
};

#endif
