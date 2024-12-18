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

#ifndef BMD_DECKLINKAPISCREENPREVIEWCALLBACK_v14_2_1_H
#define BMD_DECKLINKAPISCREENPREVIEWCALLBACK_v14_2_1_H

#include "DeckLinkAPI.h"
#include "DeckLinkAPIVideoFrame_v14_2_1.h"

// Type Declarations

BMD_CONST REFIID IID_IDeckLinkScreenPreviewCallback_v14_2_1           = /* B1D3F49A-85FE-4C5D-95C8-0B5D5DCCD438 */ { 0xB1, 0xD3, 0xF4, 0x9A, 0x85, 0xFE, 0x4C, 0x5D, 0x95, 0xC8, 0x0B, 0x5D, 0x5D, 0xCC, 0xD4, 0x38 };

/* Interface IDeckLinkScreenPreviewCallback_v14_2_1 - Screen preview callback */

class BMD_PUBLIC IDeckLinkScreenPreviewCallback_v14_2_1 : public IUnknown
{
public:
    virtual HRESULT DrawFrame (/* in */ IDeckLinkVideoFrame_v14_2_1* theFrame) = 0;

protected:
    virtual ~IDeckLinkScreenPreviewCallback_v14_2_1 () {} // call Release method to drop reference count
};

#endif /* defined(BMD_DECKLINKAPISCREENPREVIEWCALLBACK_v14_2_1_H) */
