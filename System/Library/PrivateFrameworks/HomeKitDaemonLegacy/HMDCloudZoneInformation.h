//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudZoneInformation : HMFObject
{
    _Bool _fetchFailed;	// 8 = 0x8
    _Bool _firstFetch;	// 9 = 0x9
    _Bool _zoneCreated;	// 10 = 0xa
    _Bool _handlesCloudRecord;	// 11 = 0xb
    NSUUID *_uuid;	// 16 = 0x10
    NSString *_ownerName;	// 24 = 0x18
    long long _schemaVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005be489
+ (id)shortDescription;	// IMP=0x00100000005be477
+ (id)cloudZonesArrayWithCloudZones:(id)arg1;	// IMP=0x00100000005be268
+ (id)cloudZoneInformationWithCloudZones:(id)arg1;	// IMP=0x00100000005bde70
+ (id)cloudZonesWithDictionary:(id)arg1;	// IMP=0x00100000005bda9e
- (void).cxx_destruct;	// IMP=0x00000000005bd8b5
@property(nonatomic, getter=doesHandlesCloudRecord) _Bool handlesCloudRecord; // @synthesize handlesCloudRecord=_handlesCloudRecord;
@property(nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(nonatomic, getter=isZoneCreated) _Bool zoneCreated; // @synthesize zoneCreated=_zoneCreated;
@property(nonatomic, getter=isFirstFetch) _Bool firstFetch; // @synthesize firstFetch=_firstFetch;
@property(nonatomic, getter=didFetchFailed) _Bool fetchFailed; // @synthesize fetchFailed=_fetchFailed;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;	// IMP=0x00000000005bd74a
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 parent:(id)arg3;	// IMP=0x00000000005bd6db
- (id)modelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;	// IMP=0x00000000005bd6c1
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000005bd6bb
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005bd5e4
- (void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000005bd529
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005bd3ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005bd239
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bd17b
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000005bd012
- (id)shortDescription;	// IMP=0x00000000005bcf50
- (id)initWithOwnerName:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000005bce1e
- (id)init;	// IMP=0x00000000005bcd76

// Remaining properties
@property(readonly) Class superclass;

@end
