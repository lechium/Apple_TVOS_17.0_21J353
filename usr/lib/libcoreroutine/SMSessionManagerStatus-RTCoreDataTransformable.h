//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMSessionManagerStatus.h>

@class NSString;

@interface SMSessionManagerStatus (RTCoreDataTransformable)
+ (id)createWithSessionManagerStatusMO:(id)arg1;	// IMP=0x001000000009b237
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x001000000009b0b9
- (void)updateManagedObject:(id)arg1;	// IMP=0x001000000009b5bb
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x001000000009b51e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

