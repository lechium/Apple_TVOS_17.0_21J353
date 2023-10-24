//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioStartStreamOption, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSIntuitiveConvAudioCaptureMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    CSAudioStartStreamOption *_startStreamOption;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000a91cd
- (void).cxx_destruct;	// IMP=0x00200000000a89b3
@property(retain, nonatomic) CSAudioStartStreamOption *startStreamOption; // @synthesize startStreamOption=_startStreamOption;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopAudioCaptureWithOption:(id)arg1 eventUUID:(id)arg2 error:(id)arg3;	// IMP=0x00100000000a87b6
- (void)notifyWillStopAudioCaptureWithReason:(unsigned long long)arg1;	// IMP=0x00100000000a86e0
- (void)notifyDidStartAudioCaptureSuccessfully:(_Bool)arg1 eventUUID:(id)arg2;	// IMP=0x00100000000a85c6
- (void)notifyWillStartAudioCaptureWithContext:(id)arg1 option:(id)arg2;	// IMP=0x00100000000a8407
- (void)notifyFetchedAudioStream:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00100000000a82aa
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000a821d
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000a8190
- (id)init;	// IMP=0x00100000000a8109

@end
