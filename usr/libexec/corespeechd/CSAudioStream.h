//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioStartStreamOption, CSAudioStreamRequest, NSHashTable, NSString, NSUUID;
@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject
{
    _Bool _scheduledFutureSample;	// 8 = 0x8
    _Bool _isWeakStream;	// 9 = 0x9
    _Bool _needsBoost12dB;	// 10 = 0xa
    _Bool _streaming;	// 11 = 0xb
    id <CSAudioStreamProviding> _streamProvider;	// 16 = 0x10
    id <CSAudioStreamProvidingDelegate> _delegate;	// 24 = 0x18
    unsigned long long _startSampleCount;	// 32 = 0x20
    unsigned long long _lastForwardedSampleCount;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    CSAudioStreamRequest *_streamRequest;	// 56 = 0x38
    NSString *_UUID;	// 64 = 0x40
    CSAudioStartStreamOption *_startStreamOption;	// 72 = 0x48
    NSHashTable *_tandemStreams;	// 80 = 0x50
    NSUUID *_streamingUUID;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000cb3d4
@property(retain) NSUUID *streamingUUID; // @synthesize streamingUUID=_streamingUUID;
@property _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) _Bool needsBoost12dB; // @synthesize needsBoost12dB=_needsBoost12dB;
@property(readonly, nonatomic) NSHashTable *tandemStreams; // @synthesize tandemStreams=_tandemStreams;
@property(nonatomic) _Bool isWeakStream; // @synthesize isWeakStream=_isWeakStream;
@property(retain, nonatomic, setter=setStartStreamOption:) CSAudioStartStreamOption *startStreamOption; // @synthesize startStreamOption=_startStreamOption;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) CSAudioStreamRequest *streamRequest; // @synthesize streamRequest=_streamRequest;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, setter=setScheduledFutureSample:) _Bool scheduledFutureSample; // @synthesize scheduledFutureSample=_scheduledFutureSample;
@property(readonly, nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(readonly, nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioStreamProviding> streamProvider; // @synthesize streamProvider=_streamProvider;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;	// IMP=0x00100000000cb163
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00100000000cb09c
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 lastForwardedSampleCount:(unsigned long long)arg3;	// IMP=0x00100000000cb086
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x00100000000cafbf
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;	// IMP=0x00100000000cacfa
- (void)updateAudioStreamStartTimeInSampleCount:(unsigned long long)arg1;	// IMP=0x00100000000ca82f
- (_Bool)isNarrowBand;	// IMP=0x00100000000ca7eb
- (id)recordSettings;	// IMP=0x00100000000ca79b
- (_Bool)isStreaming;	// IMP=0x00100000000ca686
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca518
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca2df
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca251
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ca1d3
- (void)dealloc;	// IMP=0x00100000000ca073
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;	// IMP=0x00100000000c9e78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

