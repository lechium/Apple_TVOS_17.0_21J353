//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceRegion : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)regionWithCoder:(id)arg1;	// IMP=0x0060000000714314
+ (id)regionWithDict:(id)arg1;	// IMP=0x00600000007142b3
+ (id)regionWithMessage:(id)arg1;	// IMP=0x0060000000714252
+ (id)regionWithNumber:(id)arg1;	// IMP=0x0060000000714205
+ (id)regionWithValue:(unsigned long long)arg1;	// IMP=0x0060000000714195
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000007140e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000714041
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000713f9c
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000713f2c
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000713e98

@end

