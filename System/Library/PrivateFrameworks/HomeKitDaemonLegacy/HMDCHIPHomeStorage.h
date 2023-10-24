//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPHomeStorage : HMFObject
{
    NSNumber *_fabricID;	// 8 = 0x8
    NSNumber *_lastNodeID;	// 16 = 0x10
    NSData *_rootCertificate;	// 24 = 0x18
    NSData *_operationalCertificate;	// 32 = 0x20
    NSData *_intermediateCertificate;	// 40 = 0x28
    NSDictionary *_keyValueStore;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000000aa030
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000aa028
- (void).cxx_destruct;	// IMP=0x00000000000a9fb3
@property(copy) NSDictionary *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(copy) NSData *intermediateCertificate; // @synthesize intermediateCertificate=_intermediateCertificate;
@property(copy) NSData *operationalCertificate; // @synthesize operationalCertificate=_operationalCertificate;
@property(copy) NSData *rootCertificate; // @synthesize rootCertificate=_rootCertificate;
@property(copy) NSNumber *lastNodeID; // @synthesize lastNodeID=_lastNodeID;
@property(copy) NSNumber *fabricID; // @synthesize fabricID=_fabricID;
- (id)attributeDescriptions;	// IMP=0x00000000000a9ac1
- (id)logIdentifier;	// IMP=0x00000000000a9a55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a9866
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a95c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a945b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9050
- (void)updateHomeModel:(id)arg1;	// IMP=0x00000000000a8e71
- (_Bool)updateUsingHomeModel:(id)arg1;	// IMP=0x00000000000a8356
@property(readonly, copy) NSDictionary *debugDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
