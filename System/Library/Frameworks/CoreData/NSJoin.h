//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject
{
    NSString *_sourceAttributeName;	// 8 = 0x8
    NSString *_destinationAttributeName;	// 16 = 0x10
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0a9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b0a24
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b09bc
- (unsigned long long)hash;	// IMP=0x00000000000b095b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b08c8
- (void)dealloc;	// IMP=0x00000000000b087e
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;	// IMP=0x00000000000b0804

@end

