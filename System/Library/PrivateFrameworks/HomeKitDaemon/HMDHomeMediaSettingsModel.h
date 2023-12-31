//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeMediaSettingsModel
{
}

+ (id)properties;	// IMP=0x0010000000648adf
+ (id)defaultModelForHomeUUID:(id)arg1;	// IMP=0x0010000000648a13
+ (id)modelIDForHomeUUID:(id)arg1;	// IMP=0x0010000000648936
+ (id)modelNamespace;	// IMP=0x0010000000648906
+ (Class)cd_entityClass;	// IMP=0x00100000006940bc
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000693f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(copy, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(copy, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
@property(readonly) Class superclass;

@end

