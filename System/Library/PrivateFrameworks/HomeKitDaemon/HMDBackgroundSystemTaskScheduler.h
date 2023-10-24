//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBackgroundSystemTaskScheduler : NSObject
{
}

- (_Bool)submitTaskRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c982c2
- (_Bool)cancelTaskRequestWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c981f9
- (id)taskRequestForIdentifier:(id)arg1;	// IMP=0x0000000000c98130
- (_Bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c98067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
