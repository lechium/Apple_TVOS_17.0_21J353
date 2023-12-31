//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMFWoBLEInfo : HMFObject
{
    NSData *_bleIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000570661
- (void).cxx_destruct;	// IMP=0x000000000057064e
@property(readonly, nonatomic) NSData *bleIdentifier; // @synthesize bleIdentifier=_bleIdentifier;
- (id)description;	// IMP=0x00000000005705d1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000570544
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005704d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005703fe
- (unsigned long long)hash;	// IMP=0x00000000005703ba
- (id)initWithBLEIdentifier:(id)arg1;	// IMP=0x000000000057034c

@end

