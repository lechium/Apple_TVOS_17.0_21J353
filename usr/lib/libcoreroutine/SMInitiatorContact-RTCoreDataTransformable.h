//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMInitiatorContact.h>

@class NSString;

@interface SMInitiatorContact (RTCoreDataTransformable)
+ (id)createWithInitiatorContactMO:(id)arg1;	// IMP=0x0010000000068426
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000000682a8
- (void)updateManagedObject:(id)arg1;	// IMP=0x0010000000068eb5
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x0010000000068e18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

