#include "stdafx.h";


//Empty constructor
DDSurfaceWrapper::DDSurfaceWrapper() {}

//CComObjectRootEx Functions
HRESULT DDSurfaceWrapper::FinalConstruct()
{
	return S_OK;
}

void DDSurfaceWrapper::FinalRelease()
{
	return;
}


//CComCoClass Functions
HRESULT DDSurfaceWrapper::CreateInstance(IUnknown *pUnk, void **ppvObject)
{
	ATL::CComObjectNoLock<DDSurfaceWrapper>* self = new ATL::CComObjectNoLock<DDSurfaceWrapper>;
	self->SetVoid(NULL);
	self->InternalFinalConstructAddRef();
	HRESULT hr = self->_AtlInitialConstruct();
	if (SUCCEEDED(hr))
		hr = self->FinalConstruct();
	if (SUCCEEDED(hr))
		hr = self->_AtlFinalConstruct();
	if (SUCCEEDED(hr))
		hr = pUnk->QueryInterface(IID_IDirectDrawSurface, (void**)&self->ddSurface);
	if (SUCCEEDED(hr))
		hr = self->QueryInterface(IID_IDirectDrawSurface, ppvObject);
	if (hr != S_OK)
		delete self;
	return hr;
}

HRESULT __stdcall DDSurfaceWrapper::AddAttachedSurface(LPDIRECTDRAWSURFACE lpDDSurface)
{

}

HRESULT __stdcall DDSurfaceWrapper::AddOverlayDirtyRect(LPRECT lpRect)
{

}

HRESULT __stdcall DDSurfaceWrapper::Blt(LPRECT lpDestRect, LPDIRECTDRAWSURFACE lpDDSurface, LPRECT lpSrcRect, DWORD dwFlags, LPDDBLTFX lpBltFx)
{

}

HRESULT __stdcall DDSurfaceWrapper::BltBatch(LPDDBLTBATCH lpBltBatch, DWORD dwCount, DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::BltFast(DWORD dwX, DWORD dwY, LPDIRECTDRAWSURFACE lpDDSurface, LPRECT srcRect, DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::ChangeUniquenessValue()
{

}

HRESULT __stdcall DDSurfaceWrapper::DeleteAttachedSurface(DWORD dwFlags, LPDIRECTDRAWSURFACE lpAttachedSurface)
{

}

HRESULT __stdcall DDSurfaceWrapper::EnumAttachedSurfaces(LPVOID lpContext, LPDDENUMSURFACESCALLBACK lpCallback)
{

}

HRESULT __stdcall DDSurfaceWrapper::EnumOverlayZOrders(DWORD dwFlags, LPVOID lpContext, LPDDENUMSURFACESCALLBACK lpCallback)
{

}

HRESULT __stdcall DDSurfaceWrapper::Flip(LPDIRECTDRAWSURFACE lpDDTargetOverride, DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::FreePrivateData(REFGUID guidTag)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetAttachedSurface(LPDDSCAPS lpCaps, LPDIRECTDRAWSURFACE *lplpAttachedSurface)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetBltStatus(DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetCaps(LPDDSCAPS lpDDSCaps)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetClipper(LPDIRECTDRAWCLIPPER *lplpDDClipper)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetColorKey(DWORD dwFlags, LPDDCOLORKEY lpDDColorKey)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetDC(HDC *lphDC)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetDDInterface(LPVOID *lplpDD)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetFlipStatus(DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetOverlayPosition(LPLONG lplX, LPLONG lplY)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetPalette(LPDIRECTDRAWPALETTE  *lplpDDPalette)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetPixelFormat(LPDDPIXELFORMAT lpDDPixelFormat)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetPrivateData(REFGUID guidTag, LPVOID  lpBuffer, LPDWORD lpcbBufferSize)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetSurfaceDesc(LPDDSURFACEDESC lpDDSurfaceDesc)
{

}

HRESULT __stdcall DDSurfaceWrapper::GetUniquenessValue(LPDWORD lpValue)
{

}

HRESULT __stdcall DDSurfaceWrapper::Initialize(LPDIRECTDRAW lpDD, LPDDSURFACEDESC lpDDSurfaceDesc)
{

}

HRESULT __stdcall DDSurfaceWrapper::IsLost()
{

}

HRESULT __stdcall DDSurfaceWrapper::Lock(LPRECT lpDestRect, LPDDSURFACEDESC lpDDSurfaceDesc, DWORD  dwFlags, HANDLE hEvent)
{

}

HRESULT __stdcall DDSurfaceWrapper::PageLock(DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::PageUnlock(DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::ReleaseDC(HDC hDC)
{

}

HRESULT __stdcall DDSurfaceWrapper::Restore()
{

}

HRESULT __stdcall DDSurfaceWrapper::SetClipper(LPDIRECTDRAWCLIPPER lpDDClipper)
{

}

HRESULT __stdcall DDSurfaceWrapper::SetColorKey(DWORD dwFlags, LPDDCOLORKEY lpDDColorKey)
{

}

HRESULT __stdcall DDSurfaceWrapper::SetOverlayPosition(LONG lX, LONG lY)
{

}

HRESULT __stdcall DDSurfaceWrapper::SetPalette(LPDIRECTDRAWPALETTE lpDDPalette)
{

}

HRESULT __stdcall DDSurfaceWrapper::SetPrivateData(REFGUID guidTag, LPVOID  lpData, DWORD   cbSize, DWORD   dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::SetSurfaceDesc(LPDDSURFACEDESC lpDDsd2, DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::Unlock(LPVOID lpRect)
{

}

HRESULT __stdcall DDSurfaceWrapper::UpdateOverlay(LPRECT lpSrcRect, LPDIRECTDRAWSURFACE lpDDDestSurface, LPRECT lpDestRect, DWORD dwFlags, LPDDOVERLAYFX lpDDOverlayFx)
{

}

HRESULT __stdcall DDSurfaceWrapper::UpdateOverlayDisplay(DWORD dwFlags)
{

}

HRESULT __stdcall DDSurfaceWrapper::UpdateOverlayZOrder(DWORD dwFlags, LPDIRECTDRAWSURFACE lpDDSReference)
{

}

void DDSurfaceWrapper::SetLogFile(FILE* log)
{
	this->logFile = log;
}