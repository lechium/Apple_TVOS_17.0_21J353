//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriEagerMitigator : NSObject
{
    float _triggerDurationThreshold;	// 8 = 0x8
    NSString *_currentRequestId;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSAsset *_prefetchedAsset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000008caa
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *currentRequestId; // @synthesize currentRequestId=_currentRequestId;
@property(nonatomic) float triggerDurationThreshold; // @synthesize triggerDurationThreshold=_triggerDurationThreshold;
- (void)attSiriUresNode:(id)arg1 withUresScore:(float)arg2;	// IMP=0x0010000000008c4e
- (void)attSiriUresNode:(id)arg1 tcuGeneratedForRequestId:(id)arg2 withNldaScore:(float)arg3 withProcessedAudioDuration:(double)arg4;	// IMP=0x0010000000008ba1
- (void)requestEndedForId:(id)arg1;	// IMP=0x0010000000008b14
- (void)requestStartedWithId:(id)arg1 forRecordContext:(id)arg2;	// IMP=0x0010000000008a55
- (id)init;	// IMP=0x0010000000008970
- (void)_attSiriUresNode:(id)arg1 tcuGeneratedForRequestId:(id)arg2 withNldaScore:(float)arg3 withProcessedAudioDuration:(double)arg4;	// IMP=0x00100000000090ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

