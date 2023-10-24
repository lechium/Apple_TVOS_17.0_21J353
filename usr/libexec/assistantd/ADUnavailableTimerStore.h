//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADUnavailableTimerStore : NSObject
{
}

- (void)dismissTimersWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000113467
- (void)setTimer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113401
- (void)getTimerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011339f
- (id)_createUnavailableError;	// IMP=0x0010000000113381

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
