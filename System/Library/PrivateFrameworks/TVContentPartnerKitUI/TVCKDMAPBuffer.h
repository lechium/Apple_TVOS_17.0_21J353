//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVCKDMAPBuffer : NSObject
{
    char *_bytes;	// 8 = 0x8
    int _capacity;	// 16 = 0x10
    int _bytesUsed;	// 20 = 0x14
    int _resizeCount;	// 24 = 0x18
}

+ (id)bufferWithCapacity:(unsigned int)arg1;	// IMP=0x006000000002a23e
+ (id)buffer;	// IMP=0x006000000002a210
@property(readonly, nonatomic) char *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) int bytesUsed; // @synthesize bytesUsed=_bytesUsed;
- (id)bufferData;	// IMP=0x000000000002c3ac
- (int)dmapDataTypeForDMAPCode:(unsigned int)arg1;	// IMP=0x000000000002bf2b
- (unsigned int)dmapCodeForATVProperty:(id)arg1;	// IMP=0x000000000002bbf0
- (unsigned int)dmapCodeForMLProperty:(id)arg1;	// IMP=0x000000000002ac0c
- (void)_addDMAPCode:(unsigned int)arg1 property:(id)arg2 dataToAdd:(id)arg3;	// IMP=0x000000000002a9a3
- (void)addATVProperty:(id)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002a91f
- (void)addMLProperty:(id)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002a8a0
- (void)appendBuffer:(const void *)arg1 length:(unsigned int)arg2;	// IMP=0x000000000002a80f
- (void)addRawData:(id)arg1;	// IMP=0x000000000002a78e
- (void)addRawInt64:(unsigned long long)arg1;	// IMP=0x000000000002a761
- (void)addRawInt32:(unsigned int)arg1;	// IMP=0x000000000002a736
- (void)addData:(unsigned int)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002a66d
- (void)addUTF8Str:(unsigned int)arg1 dataToAdd:(const char *)arg2;	// IMP=0x000000000002a5ed
- (void)addStr:(unsigned int)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002a5a4
- (void)addFloat32:(unsigned int)arg1 dataToAdd:(float)arg2;	// IMP=0x000000000002a58e
- (void)addInt64:(unsigned int)arg1 dataToAdd:(unsigned long long)arg2;	// IMP=0x000000000002a518
- (void)addInt32:(unsigned int)arg1 dataToAdd:(unsigned int)arg2;	// IMP=0x000000000002a4a2
- (void)addInt16:(unsigned int)arg1 dataToAdd:(unsigned short)arg2;	// IMP=0x000000000002a429
- (void)addInt8:(unsigned int)arg1 dataToAdd:(unsigned char)arg2;	// IMP=0x000000000002a3b6
- (void)updateHeaderAtOffset:(unsigned int)arg1;	// IMP=0x000000000002a38a
- (unsigned int)addHeader:(unsigned int)arg1;	// IMP=0x000000000002a330
- (void)dealloc;	// IMP=0x000000000002a2f1
- (id)initWithCapacity:(unsigned int)arg1;	// IMP=0x000000000002a289
- (id)init;	// IMP=0x000000000002a272

@end
