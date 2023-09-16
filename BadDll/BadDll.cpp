// BadDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "BadDll.h"


// This is an example of an exported variable
BADDLL_API int nBadDll=0;

// This is an example of an exported function.
BADDLL_API int fnBadDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBadDll::CBadDll()
{
    return;
}
