//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDisabledContainersPredicate : CNPredicate
{
    _Bool _includesDisabledContainers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ab621
@property(readonly, nonatomic) _Bool includesDisabledContainers; // @synthesize includesDisabledContainers=_includesDisabledContainers;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000ab737
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ab6ba
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab629
- (id)initWithDisabledContainersIncluded:(_Bool)arg1;	// IMP=0x00000000000ab560
- (id)initWithPredicate:(id)arg1;	// IMP=0x00000000000ab54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

