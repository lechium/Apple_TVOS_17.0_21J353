//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneIDRow : HMFObject
{
    NSString *_name;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000098d57
+ (id)shortDescription;	// IMP=0x0010000000098d4a
- (void).cxx_destruct;	// IMP=0x0000000000098d19
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098c35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000098b87
- (unsigned long long)hash;	// IMP=0x0000000000098b43
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098a8c
- (id)attributeDescriptions;	// IMP=0x00000000000989c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000098936
- (id)labels;	// IMP=0x0000000000098853
- (id)initWithName:(id)arg1 token:(id)arg2;	// IMP=0x00000000000987b1

@end

