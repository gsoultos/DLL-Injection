// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BADDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BADDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BADDLL_EXPORTS
#define BADDLL_API __declspec(dllexport)
#else
#define BADDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class BADDLL_API CBadDll {
public:
	CBadDll(void);
	// TODO: add your methods here.
};

extern BADDLL_API int nBadDll;

BADDLL_API int fnBadDll(void);
