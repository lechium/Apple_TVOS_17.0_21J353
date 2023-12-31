//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDFMF : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)fmfStatusWithCoder:(id)arg1;	// IMP=0x0060000000a1672d
+ (id)fmfStatusWithDict:(id)arg1;	// IMP=0x0060000000a166cc
+ (id)fmfStatusWithMessage:(id)arg1;	// IMP=0x0060000000a1666b
+ (id)fmfStatusWithNumber:(id)arg1;	// IMP=0x0060000000a1661e
+ (id)fmfStatusWithValue:(unsigned long long)arg1;	// IMP=0x0060000000a165ae
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000a16500
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a1645a
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000a163b5
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000a16345
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000a162b1

@end

