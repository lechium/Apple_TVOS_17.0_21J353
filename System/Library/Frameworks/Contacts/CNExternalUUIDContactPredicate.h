//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNExternalUUIDContactPredicate : CNPredicate
{
    NSArray *_externalUUIDs;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dc9ff
- (void).cxx_destruct;	// IMP=0x00000000000dcbb0
@property(readonly, copy, nonatomic) NSArray *externalUUIDs; // @synthesize externalUUIDs=_externalUUIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dcb22
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dca07
- (unsigned long long)hash;	// IMP=0x00000000000dc94a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc5e5
- (id)shortDebugDescription;	// IMP=0x00000000000dc5d8
- (id)description;	// IMP=0x00000000000dc510
- (id)initWithExternalUUIDs:(id)arg1;	// IMP=0x00000000000dc47f

@end

