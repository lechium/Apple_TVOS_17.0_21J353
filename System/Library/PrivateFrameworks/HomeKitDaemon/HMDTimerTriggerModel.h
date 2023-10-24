//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDTimerTriggerModel
{
}

+ (id)properties;	// IMP=0x00100000002e2961
+ (Class)cd_entityClass;	// IMP=0x001000000082bf89
+ (id)cd_parentReferenceName;	// IMP=0x001000000082bf7c
- (id)createPayload;	// IMP=0x00000000002e26b1
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x000000000082bc08
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x000000000082b99b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property(copy, nonatomic) NSData *fireDateTimeZone; // @dynamic fireDateTimeZone;
@property(copy, nonatomic) NSData *fireRepeatInterval; // @dynamic fireRepeatInterval;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recurrences; // @dynamic recurrences;
@property(copy, nonatomic) NSString *significantEvent; // @dynamic significantEvent;
@property(copy, nonatomic) NSData *significantEventOffset; // @dynamic significantEventOffset;
@property(readonly) Class superclass;

@end
