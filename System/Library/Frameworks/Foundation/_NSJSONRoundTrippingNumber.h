//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject
{
    NSNumber *_number;	// 8 = 0x8
    NSString *_representation;	// 16 = 0x10
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000007832dd
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00100000007831d1
+ (_Bool)isSubclassOfClass:(Class)arg1;	// IMP=0x0010000000783105
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000782e74
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000078330c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000007832f6
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000007832b6
- (_Bool)isNSNumber__;	// IMP=0x00000000007831c9
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000783167
- (Class)superclass;	// IMP=0x00000000007830f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000783060
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000782e84
- (_Bool)_allowsDirectEncoding;	// IMP=0x0000000000782e7c
- (unsigned long long)hash;	// IMP=0x0000000000782e5e
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x0000000000782e12
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000782dc5
- (id)stringValue;	// IMP=0x0000000000782da7
- (void)dealloc;	// IMP=0x0000000000782d3a
- (id)initWithNumber:(id)arg1 representation:(id)arg2;	// IMP=0x0000000000782cac

@end

