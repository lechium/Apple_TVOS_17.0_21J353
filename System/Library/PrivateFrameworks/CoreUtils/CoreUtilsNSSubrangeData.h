//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface CoreUtilsNSSubrangeData : NSData
{
    NSData *_data;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c0fa4
- (_Bool)_isCompact;	// IMP=0x00000000000c0f87
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000c0f21
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000c0eea
- (void)getBytes:(void *)arg1;	// IMP=0x00000000000c0eba
- (unsigned long long)length;	// IMP=0x00000000000c0ea8
- (const void *)bytes;	// IMP=0x00000000000c0e75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0e4c
- (void)dealloc;	// IMP=0x00000000000c0e1d
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000c0ce5
- (id)init;	// IMP=0x00000000000c0c90

@end
