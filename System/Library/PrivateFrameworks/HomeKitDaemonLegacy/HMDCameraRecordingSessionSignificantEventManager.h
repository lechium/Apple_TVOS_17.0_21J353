//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSignificantEventFaceClassificationResolver, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;	// 24 = 0x18
    NSMutableArray *_significantEvents;	// 32 = 0x20
    CDUnknownBlockType _significantEventUUIDFactory;	// 40 = 0x28
    CDUnknownBlockType _faceClassificationUUIDFactory;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000439e99
- (void).cxx_destruct;	// IMP=0x0000000000439382
@property(copy) CDUnknownBlockType faceClassificationUUIDFactory; // @synthesize faceClassificationUUIDFactory=_faceClassificationUUIDFactory;
@property(copy) CDUnknownBlockType significantEventUUIDFactory; // @synthesize significantEventUUIDFactory=_significantEventUUIDFactory;
@property(readonly) NSMutableArray *significantEvents; // @synthesize significantEvents=_significantEvents;
@property(readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)_faceRecognitionSignificantEventForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 confidenceLevel:(unsigned long long)arg5;	// IMP=0x0000000000438ed5
- (id)_filteredFaceClassificationsFromFaceClassifications:(id)arg1;	// IMP=0x0000000000438e19
- (id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)arg1;	// IMP=0x00000000004380cf
- (id)_significantEventsForEmptyAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3;	// IMP=0x0000000000437ecc
- (id)_significantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;	// IMP=0x0000000000437b23
- (id)_significantEventsForFrameResult:(id)arg1 analyzerResult:(id)arg2 dateOfOccurrence:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;	// IMP=0x000000000043741e
- (_Bool)_isAnyEventInAnalyzerEvents:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;	// IMP=0x0000000000437365
- (_Bool)_isAnyEventInAnalyzerFrameResults:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;	// IMP=0x00000000004372ac
- (void)resetState;	// IMP=0x0000000000437184
- (id)significantEventsForAnalyzerFragmentResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4;	// IMP=0x0000000000436943
- (_Bool)isAnyEventInAnalyzerFragmentResult:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;	// IMP=0x000000000043685e
- (id)initWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;	// IMP=0x000000000043670e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

