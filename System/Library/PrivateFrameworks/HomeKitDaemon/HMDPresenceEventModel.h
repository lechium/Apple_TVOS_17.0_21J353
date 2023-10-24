//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDPresenceEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;	// IMP=0x00100000002fe3a5
+ (id)properties;	// IMP=0x00100000002fe342
+ (Class)cd_entityClass;	// IMP=0x00100000002341a8
+ (id)cd_parentReferenceName;	// IMP=0x001000000023419b
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000234047
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000233f21

// Remaining properties
@property(retain, nonatomic) NSNumber *activation; // @dynamic activation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *users; // @dynamic users;

@end

