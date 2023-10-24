//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDResidentReachabilityContext : HMFObject
{
    NSNumber *_mostRecentReachability;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003e13e0
- (void).cxx_destruct;	// IMP=0x00000000003e13cd
@property(readonly, copy) NSNumber *mostRecentReachability; // @synthesize mostRecentReachability=_mostRecentReachability;
- (unsigned long long)hash;	// IMP=0x00000000003e1373
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e1236
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e11b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e1144
- (id)initWithMostRecentReachability:(id)arg1;	// IMP=0x00000000003e10d6
- (id)init;	// IMP=0x00000000003e10c2

@end

