//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKSerializerStream : NSObject
{
    void *memory;	// 8 = 0x8
    unsigned long long current;	// 16 = 0x10
    unsigned long long max;	// 24 = 0x18
    struct __CFDictionary *roomForIntLocations;	// 32 = 0x20
}

- (void)copySerializationInto:(void *)arg1;	// IMP=0x000000000079af0b
- (_Bool)writeToPath:(id)arg1 safely:(_Bool)arg2;	// IMP=0x000000000079ae43
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;	// IMP=0x000000000079ad7a
- (unsigned long long)writeRoomForInt:(int *)arg1;	// IMP=0x000000000079ad17
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000079ac64
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;	// IMP=0x000000000079ab94
- (unsigned long long)writeInt:(unsigned long long)arg1;	// IMP=0x000000000079a9de
- (void)dealloc;	// IMP=0x000000000079a924

@end
