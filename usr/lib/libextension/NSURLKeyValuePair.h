//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject
{
    id key;	// 8 = 0x8
    id value;	// 16 = 0x10
    unsigned long long hash;	// 24 = 0x18
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;	// IMP=0x006000000073988e
+ (id)pair;	// IMP=0x0060000000739861
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000739a90
- (unsigned long long)hash;	// IMP=0x0000000000739a86
- (id)description;	// IMP=0x0000000000739a59
- (id)value;	// IMP=0x0000000000739a4f
- (id)key;	// IMP=0x0000000000739a45
- (void)setValue:(id)arg1;	// IMP=0x0000000000739a17
- (void)setKey:(id)arg1;	// IMP=0x00000000007399e9
- (void)dealloc;	// IMP=0x000000000073997c
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x00000000007398c9

@end

