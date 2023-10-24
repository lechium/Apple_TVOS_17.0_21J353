//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadataModel
{
}

+ (id)allowedTypes;	// IMP=0x0010000000249120
+ (id)modelWithDictionary:(id)arg1;	// IMP=0x0010000000248eca
+ (id)metadataModelObjectUUID;	// IMP=0x0010000000248e9a
+ (id)properties;	// IMP=0x0010000000248e6a
+ (Class)cd_entityClass;	// IMP=0x00100000001f51ea
+ (id)cd_parentReferenceName;	// IMP=0x00100000001f51dd
- (id)metadataDictionary;	// IMP=0x0000000000248ce1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *legacyCloudData; // @dynamic legacyCloudData;
@property(retain, nonatomic) NSData *legacyIDSData; // @dynamic legacyIDSData;
@property(retain, nonatomic) NSNumber *metadataVersion; // @dynamic metadataVersion;
@property(retain, nonatomic) NSDictionary *rawPlist; // @dynamic rawPlist;
@property(retain, nonatomic) NSNumber *schemaVersion; // @dynamic schemaVersion;
@property(readonly) Class superclass;

@end
