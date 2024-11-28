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

#ifndef BMD_DECKLINKAPIMEMORYALLOCATOR_v14_2_1_H
#define BMD_DECKLINKAPIMEMORYALLOCATOR_v14_2_1_H

#include "DeckLinkAPI.h"

// Type Declarations

BMD_CONST REFIID IID_IDeckLinkMemoryAllocator_v14_2_1                 = /* B36EB6E7-9D29-4AA8-92EF-843B87A289E8 */ { 0xB3, 0x6E, 0xB6, 0xE7, 0x9D, 0x29, 0x4A, 0xA8, 0x92, 0xEF, 0x84, 0x3B, 0x87, 0xA2, 0x89, 0xE8 };

/* Interface IDeckLinkMemoryAllocator_v14_2_1 - Created with CoCreateInstance. */

class BMD_PUBLIC IDeckLinkMemoryAllocator_v14_2_1 : public IUnknown
{
public:
    virtual HRESULT AllocateBuffer (/* in */ uint32_t bufferSize, /* out */ void** allocatedBuffer) = 0;
    virtual HRESULT ReleaseBuffer (/* in */ void* buffer) = 0;
    virtual HRESULT Commit (void) = 0;
    virtual HRESULT Decommit (void) = 0;
};

#endif
