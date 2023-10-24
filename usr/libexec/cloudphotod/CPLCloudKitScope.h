//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZone, CKRecordZoneID, NSData;

@interface CPLCloudKitScope : NSObject
{
    CKRecordZone *_zone;	// 8 = 0x8
    long long _options;	// 16 = 0x10
}

+ (id)scopeFromTransportScope:(id)arg1;	// IMP=0x00200000000e1319
+ (id)descriptionForCloudKitScopeOptions:(long long)arg1;	// IMP=0x00100000000e0c5e
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e0c56
- (void).cxx_destruct;	// IMP=0x00200000000e1969
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(readonly, nonatomic, getter=isCoherent) _Bool coherent;
@property(readonly, nonatomic) CPLCloudKitScope *fixedCloudKitScope;
- (id)redactedDescrition;	// IMP=0x00100000000e177c
- (id)description;	// IMP=0x00100000000e16a3
- (id)recordIDWithRecordName:(id)arg1;	// IMP=0x00100000000e161e
@property(readonly, nonatomic, getter=isZoneish) _Bool zoneish;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) NSData *transportScope;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000e12a8
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000e11d1
- (id)initWithZoneID:(id)arg1;	// IMP=0x00100000000e1148
- (id)initWithZone:(id)arg1;	// IMP=0x00100000000e1086
- (id)initWithZoneID:(id)arg1 options:(long long)arg2;	// IMP=0x00100000000e0fee
- (id)initWithZone:(id)arg1 options:(long long)arg2;	// IMP=0x00100000000e0f34

@end

