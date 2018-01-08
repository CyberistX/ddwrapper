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

/* Same for DirectDrawSurface member functions*/
typedef HRESULT (__stdcall* wAddAttachedSurface)(IDirectDrawSurface* surface, LPDIRECTDRAWSURFACE lpDDSurface);
typedef HRESULT (__stdcall* wAddOverlayDirtyRect)(IDirectDrawSurface* surface, LPRECT lpRect);
typedef HRESULT (__stdcall* wBlt)(IDirectDrawSurface* surface, LPRECT lpDestRect, LPDIRECTDRAWSURFACE lpDDSurface, LPRECT lpSrcRect, DWORD dwFlags, LPDDBLTFX lpBltFx);
typedef HRESULT (__stdcall* wBltBatch)(IDirectDrawSurface* surface, LPDDBLTBATCH lpBltBatch, DWORD dwCount, DWORD dwFlags);
typedef HRESULT (__stdcall* wBltFast)(IDirectDrawSurface* surface, DWORD dwX, DWORD dwY, LPDIRECTDRAWSURFACE lpDDSurface, LPRECT srcRect, DWORD dwFlags);
typedef HRESULT (__stdcall* wChangeUniquenessValue)(IDirectDrawSurface* surface);
typedef HRESULT (__stdcall* wDeleteAttachedSurface)(IDirectDrawSurface* surface, DWORD dwFlags, LPDIRECTDRAWSURFACE lpAttachedSurface);
typedef HRESULT (__stdcall* wEnumAttachedSurfaces)(IDirectDrawSurface* surface, LPVOID lpContext, LPDDENUMSURFACESCALLBACK lpCallback);
typedef HRESULT (__stdcall* wEnumOverlayZOrders)(IDirectDrawSurface* surface, DWORD dwFlags, LPVOID lpContext, LPDDENUMSURFACESCALLBACK lpCallback);
typedef HRESULT (__stdcall* wFlip)(IDirectDrawSurface* surface, LPDIRECTDRAWSURFACE lpDDTargetOverride, DWORD dwFlags);
typedef HRESULT (__stdcall* wFreePrivateData)(IDirectDrawSurface* surface, REFGUID guidTag);
typedef HRESULT (__stdcall* wGetAttachedSurface)(IDirectDrawSurface* surface, LPDDSCAPS lpCaps, LPDIRECTDRAWSURFACE *lplpAttachedSurface);
typedef HRESULT (__stdcall* wGetBltStatus)(IDirectDrawSurface* surface, DWORD dwFlags);
typedef HRESULT (__stdcall* wGetCaps)(IDirectDrawSurface* surface, LPDDSCAPS lpDDSCaps);
typedef HRESULT (__stdcall* wGetClipper)(IDirectDrawSurface* surface, LPDIRECTDRAWCLIPPER *lplpDDClipper);
typedef HRESULT (__stdcall* wGetColorKey)(IDirectDrawSurface* surface, DWORD dwFlags, LPDDCOLORKEY lpDDColorKey);
typedef HRESULT (__stdcall* wGetDC)(IDirectDrawSurface* surface, HDC *lphDC);
typedef HRESULT (__stdcall* wGetDDInterface)(IDirectDrawSurface* surface, LPVOID *lplpDD);
typedef HRESULT (__stdcall* wGetFlipStatus)(IDirectDrawSurface* surface, DWORD dwFlags);
typedef HRESULT (__stdcall* wGetOverlayPosition)(IDirectDrawSurface* surface, LPLONG lplX, LPLONG lplY);
typedef HRESULT (__stdcall* wGetPalette)(IDirectDrawSurface* surface, LPDIRECTDRAWPALETTE  *lplpDDPalette);
typedef HRESULT (__stdcall* wGetPixelFormat)(IDirectDrawSurface* surface, LPDDPIXELFORMAT lpDDPixelFormat);
typedef HRESULT (__stdcall* wGetPrivateData)(IDirectDrawSurface* surface, REFGUID guidTag, LPVOID  lpBuffer, LPDWORD lpcbBufferSize);
typedef HRESULT (__stdcall* wGetSurfaceDesc)(IDirectDrawSurface* surface, LPDDSURFACEDESC lpDDSurfaceDesc);
typedef HRESULT (__stdcall* wGetUniquenessValue)(IDirectDrawSurface* surface, LPDWORD lpValue);
typedef HRESULT (__stdcall* wInitialize)(IDirectDrawSurface* surface, LPDIRECTDRAW lpDD, LPDDSURFACEDESC lpDDSurfaceDesc);
typedef HRESULT (__stdcall* wIsLost)(IDirectDrawSurface* surface);
typedef HRESULT (__stdcall* wLock)(IDirectDrawSurface* surface, LPRECT lpDestRect, LPDDSURFACEDESC lpDDSurfaceDesc, DWORD  dwFlags, HANDLE hEvent);
typedef HRESULT (__stdcall* wPageLock)(IDirectDrawSurface* surface, DWORD dwFlags);
typedef HRESULT (__stdcall* wPageUnlock)(IDirectDrawSurface* surface, DWORD dwFlags);
typedef HRESULT (__stdcall* wReleaseDC)(IDirectDrawSurface* surface, HDC hDC);
typedef HRESULT (__stdcall* wRestore)(IDirectDrawSurface* surface);
typedef HRESULT (__stdcall* wSetClipper)(IDirectDrawSurface* surface, LPDIRECTDRAWCLIPPER lpDDClipper);
typedef HRESULT (__stdcall* wSetColorKey)(IDirectDrawSurface* surface, DWORD dwFlags, LPDDCOLORKEY lpDDColorKey);
typedef HRESULT (__stdcall* wSetOverlayPosition)(IDirectDrawSurface* surface, LONG lX, LONG lY);
typedef HRESULT (__stdcall* wSetPalette)(IDirectDrawSurface* surface, LPDIRECTDRAWPALETTE lpDDPalette);
typedef HRESULT (__stdcall* wSetPrivateData)(IDirectDrawSurface* surface, REFGUID guidTag, LPVOID  lpData, DWORD cbSize, DWORD dwFlags);
typedef HRESULT (__stdcall* wSetSurfaceDesc)(IDirectDrawSurface* surface, LPDDSURFACEDESC lpDDsd2, DWORD dwFlags);
typedef HRESULT (__stdcall* wUnlock)(IDirectDrawSurface* surface, LPVOID lpRect);
typedef HRESULT (__stdcall* wUpdateOverlay)(IDirectDrawSurface* surface, LPRECT lpSrcRect, LPDIRECTDRAWSURFACE lpDDDestSurface, LPRECT lpDestRect, DWORD dwFlags, LPDDOVERLAYFX lpDDOverlayFx);
typedef HRESULT (__stdcall* wUpdateOverlayDisplay)(IDirectDrawSurface* surface, DWORD dwFlags);
typedef HRESULT (__stdcall* wUpdateOverlayZOrder)(IDirectDrawSurface* surface, DWORD dwFlags, LPDIRECTDRAWSURFACE lpDDSReference);

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
wGetSurfaceFromDC_export		pGetSurfaceFromDC;
wRegisterSpecialCase			pRegisterSpecialCase;

/* Same for DirectDrawSurface member functions*/
wAddAttachedSurface				pAddAttachedSurface;
wAddOverlayDirtyRect			pAddOverlayDirtyRect;
wBlt							pBlt;
wBltBatch						pBltBatch;
wBltFast						pBltFast;
wChangeUniquenessValue			pChangeUniquenessValue;
wDeleteAttachedSurface			pDeleteAttachedSurface;
wEnumAttachedSurfaces			pEnumAttachedSurfaces;
wEnumOverlayZOrders				pEnumOverlayZOrders;
wFlip							pFlip;
wFreePrivateData				pFreePrivateData;
wGetAttachedSurface				pGetAttachedSurface;
wGetBltStatus					pGetBltStatus;
wGetCaps						pGetCaps;
wGetClipper						pGetClipper;
wGetColorKey					pGetColorKey;
wGetDC							pGetDC;
wGetDDInterface					pGetDDInterface;
wGetFlipStatus					pGetFlipStatus;
wGetOverlayPosition				pGetOverlayPosition;
wGetPalette						pGetPalette;
wGetPixelFormat					pGetPixelFormat;
wGetPrivateData					pGetPrivateData;
wGetSurfaceDesc					pGetSurfaceDesc;
wGetUniquenessValue				pGetUniquenessValue;
wInitialize						pInitialize;
wIsLost							pIsLost;
wLock							pLock;
wPageLock						pPageLock;
wPageUnlock						pPageUnlock;
wReleaseDC						pReleaseDC;
wRestore						pRestore;
wSetClipper						pSetClipper;
wSetColorKey					pSetColorKey;
wSetOverlayPosition				pSetOverlayPosition;
wSetPalette						pSetPalette;
wSetPrivateData					pSetPrivateData;
wSetSurfaceDesc					pSetSurfaceDesc;
wUnlock							pUnlock;
wUpdateOverlay					pUpdateOverlay;
wUpdateOverlayDisplay			pUpdateOverlayDisplay;
wUpdateOverlayZOrder			pUpdateOverlayZOrder;

/*
Declare other global stuff
*/

HMODULE sysDDraw;
boolean initializedSurfaceHooks = false;