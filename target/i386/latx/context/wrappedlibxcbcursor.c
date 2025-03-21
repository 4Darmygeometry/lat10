#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "library_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"

#ifdef ANDROID
	const char* libxcbcursorName = "libxcb-cursor.so";
#else
	const char* libxcbcursorName = "libxcb-cursor.so.0";
#endif

#define LIBNAME libxcbcursor

#include "wrappedlib_init.h"
