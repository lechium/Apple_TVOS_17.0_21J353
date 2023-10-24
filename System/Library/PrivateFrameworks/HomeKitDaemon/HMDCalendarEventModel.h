//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDCalendarEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;	// IMP=0x00100000000bf728
+ (id)properties;	// IMP=0x00100000000bf6c5
+ (Class)cd_entityClass;	// IMP=0x0010000000a42f63
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000a42e24
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000a42ceb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *fireDateComponents; // @dynamic fireDateComponents;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

