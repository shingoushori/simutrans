/*
 * Dialogue to set the signal spacing, when CTRL+clicking a signal on toolbar
 * Used by tool_roadsign_t
 */

#ifndef overtaking_mode_h
#define overtaking_mode_h

#include "gui_frame.h"
#include "components/action_listener.h"

class button_t;
class gui_label_t;
class tool_build_way_t;
class player_t;

class overtaking_mode_frame_t : public gui_frame_t, private action_listener_t
{
private:
	static overtaking_mode_t overtaking_mode;
	static char mode_name[5][20];
	player_t *player;
	tool_build_way_t* tool;
	button_t mode_button[5];

public:
	overtaking_mode_frame_t( player_t *, tool_build_way_t * );
	bool action_triggered(gui_action_creator_t*, value_t) OVERRIDE;
	const char * get_help_filename() const { return "overtaking_mode_frame.txt"; }
};

#endif
