//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDiscretionaryImmediateScheduler : NSObject
{
}

+ (id)scheduleOperationID:(id)arg1 group:(id)arg2 bundleID:(id)arg3 requiresPastBuddy:(_Bool)arg4 options:(id)arg5 state:(unsigned long long)arg6 queue:(id)arg7 startHandler:(CDUnknownBlockType)arg8 suspendHandler:(CDUnknownBlockType)arg9;	// IMP=0x002000000000429f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

