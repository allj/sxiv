#ifndef TYPES_H
#define TYPES_H

typedef enum {
	MODE_IMAGE,
	MODE_THUMB
} appmode_t;

typedef enum {
	DIR_LEFT,
	DIR_RIGHT,
	DIR_UP,
	DIR_DOWN
} direction_t;

typedef enum {
	SCALE_DOWN,
	SCALE_FIT,
	SCALE_ZOOM
} scalemode_t;

typedef enum {
	CURSOR_ARROW,
	CURSOR_NONE,
	CURSOR_HAND,
	CURSOR_WATCH
} cursor_t;

typedef struct {
	const char *name; /* as given by user */
	const char *path; /* always absolute */
} fileinfo_t;

/* timeouts in milliseconds: */
enum {
	TO_WIN_RESIZE  = 75,
	TO_CURSOR_HIDE = 1500,
	TO_THUMBS_LOAD = 200
};

#endif /* TYPES_H */
