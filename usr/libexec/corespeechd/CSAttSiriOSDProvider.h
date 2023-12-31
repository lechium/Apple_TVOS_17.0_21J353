//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OSDAnalyzer;
@protocol CSAttSiriOSDProviderDelegate, OS_dispatch_queue;

@interface CSAttSiriOSDProvider : NSObject
{
    _Bool _didReceiveFirstbuffer;	// 8 = 0x8
    _Bool _shouldUseBoron;	// 9 = 0x9
    _Bool _deviceHasBoronEnabled;	// 10 = 0xa
    short _currentBoronCount;	// 12 = 0xc
    id <CSAttSiriOSDProviderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_osdAnalyzerQueue;	// 32 = 0x20
    OSDAnalyzer *_osdAnalyzer;	// 40 = 0x28
    unsigned long long _numSamplesProcessed;	// 48 = 0x30
    unsigned long long _numOfChunksReceived;	// 56 = 0x38
    unsigned long long _firstAudioStartSampleCount;	// 64 = 0x40
    unsigned long long _streamingCount;	// 72 = 0x48
    long long _latestBoronActiveSampleCount;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000007a5bf
@property(nonatomic) long long latestBoronActiveSampleCount; // @synthesize latestBoronActiveSampleCount=_latestBoronActiveSampleCount;
@property(nonatomic) short currentBoronCount; // @synthesize currentBoronCount=_currentBoronCount;
@property(nonatomic) _Bool deviceHasBoronEnabled; // @synthesize deviceHasBoronEnabled=_deviceHasBoronEnabled;
@property(nonatomic) _Bool shouldUseBoron; // @synthesize shouldUseBoron=_shouldUseBoron;
@property(nonatomic) unsigned long long streamingCount; // @synthesize streamingCount=_streamingCount;
@property(nonatomic) _Bool didReceiveFirstbuffer; // @synthesize didReceiveFirstbuffer=_didReceiveFirstbuffer;
@property(nonatomic) unsigned long long firstAudioStartSampleCount; // @synthesize firstAudioStartSampleCount=_firstAudioStartSampleCount;
@property(nonatomic) unsigned long long numOfChunksReceived; // @synthesize numOfChunksReceived=_numOfChunksReceived;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdAnalyzerQueue; // @synthesize osdAnalyzerQueue=_osdAnalyzerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSAttSiriOSDProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x001000000007a40c
- (void)_processBoron:(id)arg1;	// IMP=0x001000000007a2bd
- (void)addAudio:(id)arg1;	// IMP=0x001000000007a230
- (unsigned long long)getSampleCountByProcessedAudioInMs:(double)arg1;	// IMP=0x001000000007a19f
- (void)stopAnalysisAndReset;	// IMP=0x001000000007a154
- (void)stop;	// IMP=0x001000000007a109
- (void)_resetBoron;	// IMP=0x001000000007a0f1
- (void)start:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a001
- (id)init;	// IMP=0x0010000000079ed1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

