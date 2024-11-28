/* -LICENSE-START-
** Copyright (c) 2022 Blackmagic Design
**
** Permission is hereby granted, free of charge, to any person or organization
** obtaining a copy of the software and accompanying documentation (the
** "Software") to use, reproduce, display, distribute, sub-license, execute,
** and transmit the Software, and to prepare derivative works of the Software,
** and to permit third-parties to whom the Software is furnished to do so, in
** accordance with:
**
** (1) if the Software is obtained from Blackmagic Design, the End User License
** Agreement for the Software Development Kit (“EULA”) available at
** https://www.blackmagicdesign.com/EULA/DeckLinkSDK; or
**
** (2) if the Software is obtained from any third party, such licensing terms
** as notified by that third party,
**
** and all subject to the following:
**
** (3) the copyright notices in the Software and this entire statement,
** including the above license grant, this restriction and the following
** disclaimer, must be included in all copies of the Software, in whole or in
** part, and all derivative works of the Software, unless such copies or
** derivative works are solely in the form of machine-executable object code
** generated by a source language processor.
**
** (4) THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
**
** A copy of the Software is available free of charge at
** https://www.blackmagicdesign.com/desktopvideo_sdk under the EULA.
**
** -LICENSE-END-
*/

#ifndef BMD_DECKLINKAPIMETALSCREENPREVIEW_v14_2_1_H
#define BMD_DECKLINKAPIMETALSCREENPREVIEW_v14_2_1_H

#include "DeckLinkAPI.h"
#include "DeckLinkAPIVideoFrame_v14_2_1.h"

// Type Declarations

BMD_CONST REFIID IID_IDeckLinkMetalScreenPreviewHelper_v14_2_1        = /* 1AB252C5-DACB-4AE8-A58B-5320DE9CE373 */ { 0x1A, 0xB2, 0x52, 0xC5, 0xDA, 0xCB, 0x4A, 0xE8, 0xA5, 0x8B, 0x53, 0x20, 0xDE, 0x9C, 0xE3, 0x73 };

/* Interface IDeckLinkMetalScreenPreviewHelper - Created with CreateMetalScreenPreviewHelper(). */

class BMD_PUBLIC IDeckLinkMetalScreenPreviewHelper_v14_2_1 : public IUnknown
{
public:
	virtual HRESULT Initialize (/* in */ void* device) = 0;
	virtual HRESULT Draw (/* in */ void* cmdBuffer, /* in */ void* renderPassDescriptor, /* in */ void* viewport) = 0;
	virtual HRESULT SetFrame (/* in */ IDeckLinkVideoFrame_v14_2_1* theFrame) = 0;
	virtual HRESULT Set3DPreviewFormat (/* in */ BMD3DPreviewFormat previewFormat) = 0;

protected:
	virtual ~IDeckLinkMetalScreenPreviewHelper_v14_2_1 () {} // call Release method to drop reference count
};

#endif