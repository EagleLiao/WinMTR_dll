// mtr.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "mtr.h"
#include "WinMTRNet.h"


// This is an example of an exported variable
MTR_API int nmtr=0;

// This is an example of an exported function.
MTR_API int fnmtr(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see mtr.h for the class definition
Cmtr::Cmtr()
{
	return;
}
