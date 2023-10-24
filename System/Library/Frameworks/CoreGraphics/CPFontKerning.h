//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject
{
    struct __CFData *kernTable;	// 8 = 0x8
    const char *dataPtr;	// 16 = 0x10
    unsigned int offset;	// 24 = 0x18
    unsigned int kernTableLength;	// 28 = 0x1c
    struct __CFDictionary *kernDictionary;	// 32 = 0x20
    _Bool override;	// 40 = 0x28
    _Bool valid;	// 41 = 0x29
}

- (struct __CFDictionary *)createKernTable;	// IMP=0x00000000000a7bc5
- (void)doTable;	// IMP=0x00000000000a7afa
- (void)doOTSubtable;	// IMP=0x00000000000a7a5d
- (void)doTTSubtable;	// IMP=0x00000000000a79c4
- (void)doSubtableFormat3;	// IMP=0x00000000000a79be
- (void)doSubtableFormat2;	// IMP=0x00000000000a79b8
- (void)doSubtableFormat1;	// IMP=0x00000000000a79b2
- (void)doSubtableFormat0;	// IMP=0x00000000000a795f
- (void)doKerningPair;	// IMP=0x00000000000a789a
- (unsigned int)readUnsignedLong;	// IMP=0x00000000000a7824
- (short)readShort;	// IMP=0x00000000000a7810
- (unsigned short)readUnsignedShort;	// IMP=0x00000000000a77ca
- (unsigned char)readByte;	// IMP=0x00000000000a77a4
- (void)dealloc;	// IMP=0x00000000000a7766
- (void)finalize;	// IMP=0x00000000000a7728
- (void)dispose;	// IMP=0x00000000000a7702
- (id)initWithCGFont:(struct CGFont *)arg1;	// IMP=0x00000000000a769c
- (id)initWithKernData:(struct __CFData *)arg1;	// IMP=0x00000000000a763a

@end
