//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDHomeAudioAnalysisStereoPairController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_audioAnalysisStereoPairDetectedEventsMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000be8f2b
- (void)updateAudioAnalysisStereoPairDetectedEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000be8e33
- (void)compareOrUpdateRecentAudioAnalysisStereoPairEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 window:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000be8514
- (id)init;	// IMP=0x0000000000be84d9

@end

