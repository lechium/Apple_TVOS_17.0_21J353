//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSInlineData : NSData
{
    unsigned short _length;	// 8 = 0x8
}

+ (id)_allocWithExtraBytes:(unsigned long long)arg1;	// IMP=0x0060000000620e61
- (_Bool)_providesConcreteBacking;	// IMP=0x0000000000620fd8
- (id)_createDispatchData;	// IMP=0x0000000000620fcc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000620f0c
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000620ea5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000620e9a
- (_Bool)_isCompact;	// IMP=0x0000000000620e92
- (const void *)bytes;	// IMP=0x0000000000620e88
- (unsigned long long)length;	// IMP=0x0000000000620e77

@end

