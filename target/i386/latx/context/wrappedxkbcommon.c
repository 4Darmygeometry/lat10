#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "library_private.h"

const char* xkbcommonName = "libxkbcommon.so.0";
#define LIBNAME xkbcommon

#include "wrappedlib_init.h"

