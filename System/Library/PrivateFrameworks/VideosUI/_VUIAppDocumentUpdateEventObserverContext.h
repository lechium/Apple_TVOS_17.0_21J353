//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, UIViewController;

__attribute__((visibility("hidden")))
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject
{
    NSSet *_eventDescriptors;	// 8 = 0x8
    NSMutableDictionary *_refreshTimerByEventDescriptor;	// 16 = 0x10
    CDUnknownBlockType _refreshTimerFiredBlock;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e8d64
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType refreshTimerFiredBlock; // @synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock;
@property(retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor; // @synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor;
@property(copy, nonatomic) NSSet *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
- (void)_cancelAllRefreshTimers;	// IMP=0x00000000000e8c84
- (void)_cancelRefreshTimers:(id)arg1;	// IMP=0x00000000000e8b5a
- (void)_cancelRefreshTimer:(id)arg1;	// IMP=0x00000000000e8b46
- (void)_startRefreshTimer:(id)arg1;	// IMP=0x00000000000e8b32
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;	// IMP=0x00000000000e894e
- (void)updateDescriptorsWithDescriptors:(id)arg1;	// IMP=0x00000000000e860b
- (void)invalidate;	// IMP=0x00000000000e82bc
- (void)dealloc;	// IMP=0x00000000000e827e

@end

