//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceAssociationInfoProto : NSObject
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSUUID *_idsIdentifier;	// 16 = 0x10
    NSString *_idsDestination;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005118b7
@property(readonly) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(readonly) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)protoData;	// IMP=0x000000000051182b
- (id)protoPayload;	// IMP=0x000000000051170f
- (unsigned long long)hash;	// IMP=0x000000000051164e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005114a0
- (id)description;	// IMP=0x00000000005113e3
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000511365
- (id)initWithProtoPayload:(id)arg1;	// IMP=0x0000000000511042
- (id)initWithAccessoryUUID:(id)arg1 idsIdentifier:(id)arg2 idsDestination:(id)arg3;	// IMP=0x0000000000510f8a

@end

