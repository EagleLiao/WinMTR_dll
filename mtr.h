// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MTR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MTR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MTR_EXPORTS
#define MTR_API __declspec(dllexport)
#else
#define MTR_API __declspec(dllimport)
#endif

// This class is exported from the mtr.dll
class MTR_API Cmtr {
public:
	Cmtr(void);
	// TODO: add your methods here.
};

extern MTR_API int nmtr;

MTR_API int fnmtr(void);
