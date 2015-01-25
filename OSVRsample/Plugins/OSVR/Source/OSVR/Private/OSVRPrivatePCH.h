// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "IOSVR.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.

#include "Core.h"
#include "CoreUObject.h"

#include "Engine.h"

#define OSVR_ENABLED 1
#define OSVR_INPUTDEVICE_ENABLED 0

#if OSVR_ENABLED
#include <osvr/ClientKit/ContextC.h>
#include <osvr/ClientKit/InterfaceC.h>
#include <osvr/ClientKit/InterfaceCallbackC.h>
#include <osvr/ClientKit/InterfaceStateC.h>
#include <osvr/ClientKit/ParametersC.h>
#else
typedef void* OSVR_ClientContext;
typedef void* OSVR_ClientInterface;
#endif // OSVR_ENABLED
