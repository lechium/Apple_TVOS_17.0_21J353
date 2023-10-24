//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceUpdateReason : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)reasonWithCoder:(id)arg1;	// IMP=0x0060000000b54493
+ (id)reasonWithDict:(id)arg1;	// IMP=0x0060000000b54432
+ (id)reasonWithMessage:(id)arg1;	// IMP=0x0060000000b543d1
+ (id)reasonWithNumber:(id)arg1;	// IMP=0x0060000000b54384
+ (id)reasonWithValue:(unsigned long long)arg1;	// IMP=0x0060000000b54314
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000b5425e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b541b8
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000b54113
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000b540a3
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000b5400f

@end
