//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges29AttendingStatesServiceHandler : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *assistantId;	// 16 = 0x10
    MISSING_TYPE *messagePublisher;	// 3 = 0x3
    MISSING_TYPE *candidateRequestCacheManager;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x0000000000004de0
- (id)init;	// IMP=0x0000000000004d80
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x0000000000004d10
- (void)speechStartDetectedWithShouldDuckTTS:(_Bool)arg1;	// IMP=0x0000000000004320
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x0000000000003b80
- (void)localAttendingStoppedUnexpectedlyWithError:(id)arg1;	// IMP=0x0000000000003a60
- (void)localAttendingWillStartWithRootRequestId:(id)arg1;	// IMP=0x0000000000003030
- (void)localAttendingStartedWithRootRequestId:(id)arg1;	// IMP=0x00000000000029c0
- (void)localAttendingStarted;	// IMP=0x00000000000024c0

@end
