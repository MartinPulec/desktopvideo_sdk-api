/* -LICENSE-START-
** Copyright (c) 2017 Blackmagic Design
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

#ifndef BMD_DECKLINKAPIVIDEOOUTPUT_v10_11_H
#define BMD_DECKLINKAPIVIDEOOUTPUT_v10_11_H

#include "DeckLinkAPI.h"
#include "DeckLinkAPI_v10_11.h"
#include "DeckLinkAPIVideoInput_v14_2_1.h"
#include "DeckLinkAPIVideoOutput_v14_2_1.h"

// Type Declarations

BMD_CONST REFIID IID_IDeckLinkOutput_v10_11                              = /* CC5C8A6E-3F2F-4B3A-87EA-FD78AF300564 */ {0xCC,0x5C,0x8A,0x6E,0x3F,0x2F,0x4B,0x3A,0x87,0xEA,0xFD,0x78,0xAF,0x30,0x05,0x64};

/* Interface IDeckLinkOutput_v10_11 - DeckLink output interface. */

class IDeckLinkOutput_v10_11 : public IUnknown
{
public:
    virtual HRESULT DoesSupportVideoMode (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDVideoOutputFlags flags, /* out */ BMDDisplayModeSupport_v10_11 *result, /* out */ IDeckLinkDisplayMode **resultDisplayMode) = 0;
    virtual HRESULT GetDisplayModeIterator (/* out */ IDeckLinkDisplayModeIterator **iterator) = 0;

    virtual HRESULT SetScreenPreviewCallback (/* in */ IDeckLinkScreenPreviewCallback_v14_2_1 *previewCallback) = 0;

    /* Video Output */

    virtual HRESULT EnableVideoOutput (/* in */ BMDDisplayMode displayMode, /* in */ BMDVideoOutputFlags flags) = 0;
    virtual HRESULT DisableVideoOutput (void) = 0;

    virtual HRESULT SetVideoOutputFrameMemoryAllocator (/* in */ IDeckLinkMemoryAllocator_v14_2_1 *theAllocator) = 0;
    virtual HRESULT CreateVideoFrame (/* in */ int32_t width, /* in */ int32_t height, /* in */ int32_t rowBytes, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDFrameFlags flags, /* out */ IDeckLinkMutableVideoFrame_v14_2_1 **outFrame) = 0;
    virtual HRESULT CreateAncillaryData (/* in */ BMDPixelFormat pixelFormat, /* out */ IDeckLinkVideoFrameAncillary **outBuffer) = 0;

    virtual HRESULT DisplayVideoFrameSync (/* in */ IDeckLinkVideoFrame_v14_2_1 *theFrame) = 0;
    virtual HRESULT ScheduleVideoFrame (/* in */ IDeckLinkVideoFrame_v14_2_1 *theFrame, /* in */ BMDTimeValue displayTime, /* in */ BMDTimeValue displayDuration, /* in */ BMDTimeScale timeScale) = 0;
    virtual HRESULT SetScheduledFrameCompletionCallback (/* in */ IDeckLinkVideoOutputCallback_v14_2_1 *theCallback) = 0;
    virtual HRESULT GetBufferedVideoFrameCount (/* out */ uint32_t *bufferedFrameCount) = 0;

    /* Audio Output */

    virtual HRESULT EnableAudioOutput (/* in */ BMDAudioSampleRate sampleRate, /* in */ BMDAudioSampleType sampleType, /* in */ uint32_t channelCount, /* in */ BMDAudioOutputStreamType streamType) = 0;
    virtual HRESULT DisableAudioOutput (void) = 0;

    virtual HRESULT WriteAudioSamplesSync (/* in */ void *buffer, /* in */ uint32_t sampleFrameCount, /* out */ uint32_t *sampleFramesWritten) = 0;

    virtual HRESULT BeginAudioPreroll (void) = 0;
    virtual HRESULT EndAudioPreroll (void) = 0;
    virtual HRESULT ScheduleAudioSamples (/* in */ void *buffer, /* in */ uint32_t sampleFrameCount, /* in */ BMDTimeValue streamTime, /* in */ BMDTimeScale timeScale, /* out */ uint32_t *sampleFramesWritten) = 0;

    virtual HRESULT GetBufferedAudioSampleFrameCount (/* out */ uint32_t *bufferedSampleFrameCount) = 0;
    virtual HRESULT FlushBufferedAudioSamples (void) = 0;

    virtual HRESULT SetAudioCallback (/* in */ IDeckLinkAudioOutputCallback *theCallback) = 0;

    /* Output Control */

    virtual HRESULT StartScheduledPlayback (/* in */ BMDTimeValue playbackStartTime, /* in */ BMDTimeScale timeScale, /* in */ double playbackSpeed) = 0;
    virtual HRESULT StopScheduledPlayback (/* in */ BMDTimeValue stopPlaybackAtTime, /* out */ BMDTimeValue *actualStopTime, /* in */ BMDTimeScale timeScale) = 0;
    virtual HRESULT IsScheduledPlaybackRunning (/* out */ bool *active) = 0;
    virtual HRESULT GetScheduledStreamTime (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *streamTime, /* out */ double *playbackSpeed) = 0;
    virtual HRESULT GetReferenceStatus (/* out */ BMDReferenceStatus *referenceStatus) = 0;

    /* Hardware Timing */

    virtual HRESULT GetHardwareReferenceClock (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *hardwareTime, /* out */ BMDTimeValue *timeInFrame, /* out */ BMDTimeValue *ticksPerFrame) = 0;
    virtual HRESULT GetFrameCompletionReferenceTimestamp (/* in */ IDeckLinkVideoFrame_v14_2_1 *theFrame, /* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *frameCompletionTimestamp) = 0;

protected:
    virtual ~IDeckLinkOutput_v10_11 () {} // call Release method to drop reference count
};

#endif /* defined(BMD_DECKLINKAPIVIDEOOUTPUT_v10_11_H) */
