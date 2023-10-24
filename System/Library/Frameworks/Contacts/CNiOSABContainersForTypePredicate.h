//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainersForTypePredicate : CNPredicate
{
    long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012db5e
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x000000000012de6b
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000012dc7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012dbfa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012db66
- (id)initWithType:(long long)arg1;	// IMP=0x000000000012da90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
