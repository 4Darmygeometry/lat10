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
	const char* libxcbicccmName = "libxcb-icccm.so";
#else
	const char* libxcbicccmName = "libxcb-icccm.so.4";
#endif

#define LIBNAME libxcbicccm

#include "wrappedlib_init.h"
