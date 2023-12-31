//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDApplicationData : HMFObject
{
    NSUUID *_parentUUID;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSMutableDictionary *_appDataDictionary;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000001bfaf4
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001bfaec
- (void).cxx_destruct;	// IMP=0x00000000001bf9aa
@property(retain, nonatomic) NSMutableDictionary *appDataDictionary; // @synthesize appDataDictionary=_appDataDictionary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (id)logIdentifier;	// IMP=0x00000000001bf8ff
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000001bf7de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bf708
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bf490
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bf407
- (void)encodeForXPCTransportWithCoder:(id)arg1 key:(id)arg2;	// IMP=0x00000000001bf33a
- (void)updateParentUUIDIfNil:(id)arg1;	// IMP=0x00000000001bf259
- (void)updateWithModel:(id)arg1;	// IMP=0x00000000001befbb
- (id)dumpState;	// IMP=0x00000000001beb51
- (id)dictionary;	// IMP=0x00000000001beb09
- (void)removeApplicationDataForIdentifier:(id)arg1;	// IMP=0x00000000001bea9a
- (id)applicationDataForIdentifier:(id)arg1;	// IMP=0x00000000001be772
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000001be00c
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;	// IMP=0x00000000001bde63
- (id)initWithParentUUID:(id)arg1;	// IMP=0x00000000001bddae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

