//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface PQLNameInjectionBase : NSData
{
    unsigned long long _length;	// 8 = 0x8
    char *_bytes;	// 16 = 0x10
}

- (id)initWithData:(id)arg1;	// IMP=0x00000000000015dd
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000001550
@property(readonly, nonatomic) NSData *sql;
- (void)dealloc;	// IMP=0x0000000000001506
- (const void *)bytes;	// IMP=0x00000000000014f5
- (unsigned long long)length;	// IMP=0x00000000000014e4

@end

