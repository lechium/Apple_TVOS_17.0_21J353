//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccountHandle, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMDDeviceHandle : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002a70f2
+ (id)identifierNamespace;	// IMP=0x00100000002a70c2
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x00100000002a700e
- (void).cxx_destruct;	// IMP=0x00000000002a6ffb
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a6f7a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a6eed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a6ee2
@property(readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property(readonly, nonatomic, getter=isGlobal) _Bool global;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000002a6d70
- (id)initWithDestination:(id)arg1;	// IMP=0x00000000002a6d3d
@property(readonly, copy, nonatomic) NSString *destination;
- (id)init;	// IMP=0x00000000002a6bed

@end

