#pragma once


/*
Define data type of hooked functions
*/
typedef HRESULT(__stdcall* wDllGetClassObject) (REFCLSID, REFIID, LPVOID*);
typedef HRESULT(__stdcall* wDirectDrawCreate) (GUID*, LPDIRECTDRAW*, IUnknown*);
typedef HRESULT(__stdcall* wDirectDrawCreateEx) (GUID*, LPVOID*, REFIID, IUnknown*);
typedef HRESULT(__stdcall* wDirectDrawCreateClipper) (DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lpDDClipper, IUnknown FAR *pUnknown);
typedef HRESULT(__stdcall* wDirectDrawEnumerateA) (LPDDENUMCALLBACK lpCallback, LPVOID lpContext);
typedef HRESULT(__stdcall* wDirectDrawEnumerateW) (LPDDENUMCALLBACK lpCallback, LPVOID lpContext);
typedef HRESULT(__stdcall* wDirectDrawEnumerateExA) (LPDDENUMCALLBACK lpCallback, LPVOID lpContext, DWORD dwFlags);
typedef HRESULT(__stdcall* wDirectDrawEnumerateExW) (LPDDENUMCALLBACK lpCallback, LPVOID lpContext, DWORD dwFlags);
typedef HRESULT(__stdcall* wDllCanUnloadNow) ();
typedef HRESULT(__stdcall* wD3DParseUnknownCommand) (LPVOID lpCmd, LPVOID *lpRetCmd);

typedef DWORD(__stdcall* wAcquireDDThreadLock) ();
typedef DWORD(__stdcall* wReleaseDDThreadLock) ();
typedef DWORD(__stdcall* wGetOLEThunkData) (DWORD dwIndex);
typedef DWORD(__stdcall* wSetAppCompatData) (DWORD dwIndex, DWORD dwData);
typedef DWORD(__stdcall* wCompleteCreateSysmemSurface) (DWORD);
typedef HRESULT(__stdcall* wDDGetAttachedSurfaceLcl) (DWORD, DWORD, DWORD);
typedef DWORD(__stdcall* wDDInternalLock) (DWORD, DWORD);
typedef DWORD(__stdcall* wDDInternalUnlock) (DWORD);
typedef HRESULT(__stdcall* wDSoundHelp) (DWORD, DWORD, DWORD);
typedef HRESULT(__stdcall* wGetDDSurfaceLocal) (DWORD, DWORD, DWORD);
typedef HRESULT(__stdcall* wGetSurfaceFromDC_export) (DWORD, DWORD, DWORD);
typedef HRESULT(__stdcall* wRegisterSpecialCase) (DWORD, DWORD, DWORD, DWORD);

typedef HRESULT (__stdcall* wCompact)(IDirectDraw* ddObj);
typedef HRESULT (__stdcall* wCreateClipper)(IDirectDraw* ddObj, DWORD dwFlags, LPDIRECTDRAWCLIPPER *lpDDClipper, IUnknown *pUnk);
typedef HRESULT (__stdcall* wCreatePalette)(IDirectDraw* ddObj, DWORD dwFlags, LPPALETTEENTRY lpDDColor, LPDIRECTDRAWPALETTE *lpDDPalette, IUnknown *pUnk);
typedef HRESULT (__stdcall* wCreateSurface)(IDirectDraw* ddObj, LPDDSURFACEDESC2 lpDDSurfDesc, LPDIRECTDRAWSURFACE7 *lpDDSurface, IUnknown *pUnk);
typedef HRESULT (__stdcall* wDuplicateSurface)(IDirectDraw* ddObj, LPDIRECTDRAWSURFACE7 lpDDSurface, LPDIRECTDRAWSURFACE7 *lplpDDSurface);
typedef HRESULT (__stdcall* wEnumDisplayModes)(IDirectDraw* ddObj, DWORD dwFlags, LPDDSURFACEDESC2 lpDDSD2, LPVOID lpContext, LPDDENUMMODESCALLBACK2 lpEnumModeCallback);
typedef HRESULT (__stdcall* wEnumSurfaces)(IDirectDraw* ddObj, DWORD dwFlags, LPDDSURFACEDESC2 lpDDSD2, LPVOID lpContext, LPDDENUMSURFACESCALLBACK7 lpEnumSurfCallback);
typedef HRESULT (__stdcall* wEvaluateMode)(IDirectDraw* ddObj, DWORD dwFlags, DWORD *pSecUntilTimeout);
typedef HRESULT (__stdcall* wFlipToGDISurface)(IDirectDraw* ddObj);
typedef HRESULT (__stdcall* wGetAvailableVidMem)(IDirectDraw* ddObj, LPDDSCAPS2 lpDDSCaps, LPDWORD lpdwTotal, LPDWORD lpdwFree);
typedef HRESULT (__stdcall* wGetCaps)(IDirectDraw* ddObj, LPDDCAPS lpDDDriverCaps, LPDDCAPS lpDDHELCaps);
typedef HRESULT (__stdcall* wGetDeviceIdentifier)(IDirectDraw* ddObj, LPDDDEVICEIDENTIFIER2 lpddi, DWORD dwFlags);
typedef HRESULT (__stdcall* wGetDisplayMode)(IDirectDraw* ddObj, LPDDSURFACEDESC2 lpDDSurf);
typedef HRESULT (__stdcall* wGetFourCCCodes)(IDirectDraw* ddObj, LPDWORD lpNumCodes, LPDWORD lpCodes);
typedef HRESULT (__stdcall* wGetGDISurface)(IDirectDraw* ddObj, LPDIRECTDRAWSURFACE7 *lplpGDIDDSurf);
typedef HRESULT (__stdcall* wGetMonitorFrequency)(IDirectDraw* ddObj, LPDWORD lpdwFreq);
typedef HRESULT (__stdcall* wGetScanLine)(IDirectDraw* ddObj, LPDWORD lpdwScanLine);
typedef HRESULT (__stdcall* wGetSurfaceFromDC)(IDirectDraw* ddObj, HDC hdc, LPDIRECTDRAWSURFACE7 *lpDDS);
typedef HRESULT (__stdcall* wGetVerticalBlankStatus)(IDirectDraw* ddObj, LPBOOL lpVB);
typedef HRESULT (__stdcall* wInitialize)(IDirectDraw* ddObj, GUID *lpGUID);
typedef HRESULT (__stdcall* wRestoreAllSurfaces)(IDirectDraw* ddObj);
typedef HRESULT (__stdcall* wRestoreDisplayMode)(IDirectDraw* ddObj);
typedef HRESULT (__stdcall* wSetCooperativeLevel)(IDirectDraw* ddObj, HWND hwnd, DWORD dwFlags);
typedef HRESULT (__stdcall* wSetDisplayMode)(IDirectDraw* ddObj, DWORD dwWidth, DWORD dwHeight, DWORD dwBPP, DWORD dwRefresh, DWORD dwFlags);
typedef HRESULT (__stdcall* wStartModeTest)(IDirectDraw* ddObj, LPSIZE lpModesToTest, DWORD dwNumEntries, DWORD dwFlags);
typedef HRESULT (__stdcall* wTestCooperativeLevel)(IDirectDraw* ddObj);
typedef HRESULT (__stdcall* wWaitForVerticalBlank)(IDirectDraw* ddObj, DWORD dwFlags, HANDLE hEvent);

/*
Declare pointers to hooked functions
*/

wDirectDrawCreate				pDirectDrawCreate;
wDirectDrawCreateEx				pDirectDrawCreateEx;
wDirectDrawCreateClipper		pDirectDrawCreateClipper;
wDirectDrawEnumerateA			pDirectDrawEnumerateA;
wDirectDrawEnumerateW			pDirectDrawEnumerateW;
wDirectDrawEnumerateExA			pDirectDrawEnumerateExA;
wDirectDrawEnumerateExW			pDirectDrawEnumerateExW;
wD3DParseUnknownCommand			pD3DParseUnknownCommand;
wDllGetClassObject				pDllGetClassObject;
wDllCanUnloadNow				pDllCanUnloadNow;
wAcquireDDThreadLock			pAcquireDDThreadLock;
wReleaseDDThreadLock			pReleaseDDThreadLock;
wGetOLEThunkData				pGetOLEThunkData;
wSetAppCompatData				pSetAppCompatData;
wCompleteCreateSysmemSurface	pCompleteCreateSysmemSurface;
wDDGetAttachedSurfaceLcl		pDDGetAttachedSurfaceLcl;
wDDInternalLock					pDDInternalLock;
wDDInternalUnlock				pDDInternalUnlock;
wDSoundHelp						pDSoundHelp;
wGetDDSurfaceLocal				pGetDDSurfaceLocal;
wGetSurfaceFromDC_export				pGetSurfaceFromDC;
wRegisterSpecialCase			pRegisterSpecialCase;

/*
Declare other global stuff
*/

HMODULE sysDDraw;