//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSKeyValueObjectAndKeyPair : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _objectPointer;	// 16 = 0x10
    Class _objectClass;	// 24 = 0x18
    void *_context;	// 32 = 0x20
    NSString *_key;	// 40 = 0x28
}

- (id)description;	// IMP=0x0000000000754f13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000754f08
- (unsigned long long)hash;	// IMP=0x0000000000754ee3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000754e7f
- (void)dealloc;	// IMP=0x0000000000754d37

@end

