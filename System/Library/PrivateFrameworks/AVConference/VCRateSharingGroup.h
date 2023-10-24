//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCRateSharingGroup
{
    NSMutableDictionary *_shareProfileDictionary;	// 88 = 0x58
    NSMutableDictionary *_rateSharingClientMap;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 104 = 0x68
    struct tagVCMediaQueue *_mediaQueue;	// 112 = 0x70
    unsigned int _maxBitrate;	// 120 = 0x78
    NSString *_mediaQueueIdentifier;	// 128 = 0x80
    NSMutableDictionary *_rateSharingClientTargetBitrateDict;	// 136 = 0x88
}

@property(readonly) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(readonly) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
- (_Bool)deregisterRateSharingClient:(id)arg1;	// IMP=0x000000000006eb1d
- (unsigned int)calculateMaxTargetBitrate;	// IMP=0x000000000006e9ba
- (unsigned int)countRateControllersForInterfaceType:(id)arg1;	// IMP=0x000000000006e95b
- (void)updateShareProfileForInterfaceType:(id)arg1;	// IMP=0x000000000006e71a
- (_Bool)registerRateSharingClient:(id)arg1 forInterfaceType:(unsigned int)arg2;	// IMP=0x000000000006e3b8
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 mediaQueueStreamId:(unsigned int)arg2 type:(int)arg3;	// IMP=0x000000000006dfb5
- (_Bool)createMediaQueue;	// IMP=0x000000000006ddd5
- (void)setTargetBitrate:(unsigned int)arg1 fromRateSharingClient:(id)arg2;	// IMP=0x000000000006dcfc
- (void)setVCMediaQueuePeakBitrateAndMaxTargetBitrate:(unsigned int)arg1;	// IMP=0x000000000006dacb
- (void)dealloc;	// IMP=0x000000000006d9f9
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000006d8aa
- (id)init;	// IMP=0x000000000006d72d

@end
