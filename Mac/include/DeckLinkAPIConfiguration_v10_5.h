/* -LICENSE-START-
** Copyright (c) 2015 Blackmagic Design
**  
** Permission is hereby granted, free of charge, to any person or organization 
** obtaining a copy of the software and accompanying documentation (the 
** "Software") to use, reproduce, display, distribute, sub-license, execute, 
** and transmit the Software, and to prepare derivative works of the Software, 
** and to permit third-parties to whom the Software is furnished to do so, in 
** accordance with:
** 
** (1) if the Software is obtained from Blackmagic Design, the End User License 
** Agreement for the Software Development Kit ("EULA") available at 
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

#ifndef BMD_DECKLINKAPICONFIGURATION_v10_5_H
#define BMD_DECKLINKAPICONFIGURATION_v10_5_H

#include "DeckLinkAPIConfiguration.h"

// Interface ID Declarations

BMD_CONST REFIID IID_IDeckLinkEncoderConfiguration_v10_5          = /* 67455668-0848-45DF-8D8E-350A77C9A028 */ {0x67,0x45,0x56,0x68,0x08,0x48,0x45,0xDF,0x8D,0x8E,0x35,0x0A,0x77,0xC9,0xA0,0x28};

// Forward Declarations

class IDeckLinkConfiguration_v10_5;

/* Interface IDeckLinkEncoderConfiguration_v10_5 - DeckLink Encoder Configuration interface. Obtained from IDeckLinkEncoderInput */

class IDeckLinkEncoderConfiguration_v10_5 : public IUnknown
{
public:
    virtual HRESULT SetFlag (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ bool value) = 0;
    virtual HRESULT GetFlag (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ bool *value) = 0;
    virtual HRESULT SetInt (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ int64_t value) = 0;
    virtual HRESULT GetInt (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ int64_t *value) = 0;
    virtual HRESULT SetFloat (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ double value) = 0;
    virtual HRESULT GetFloat (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ double *value) = 0;
    virtual HRESULT SetString (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ CFStringRef value) = 0;
    virtual HRESULT GetString (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ CFStringRef *value) = 0;
    virtual HRESULT GetDecoderConfigurationInfo (/* out */ void *buffer, /* in */ long bufferSize, /* out */ long *returnedSize) = 0;

protected:
    virtual ~IDeckLinkEncoderConfiguration_v10_5 () {} // call Release method to drop reference count
};

#endif /* defined(BMD_DECKLINKAPICONFIGURATION_v10_5_H) */
