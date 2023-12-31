//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLBlitCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface MTLDeserializerBlitDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLBlitCommandEncoderSPI> blitEncoder;	// 16 = 0x10
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000001d3c
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001adb
- (void)decodeBlitWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001a83
- (void)decodeBlitUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001a2b
- (void)decodeSynchronizeTextureImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001a06
- (void)decodeSynchronizeResource:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000019e1
- (void)decodeOptimizeImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001962
- (void)decodeOptimize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000018ed
- (void)decodeGenerateMipmaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001896
- (void)decodeFillBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000017b7
- (void)decodeCopyFromTextureToTextureWithOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000016de
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001645
- (void)decodeCopyFromTextureToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001578
- (void)decodeCopyFromTextureToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000014ae
- (void)decodeCopyFromBufferToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001426
- (void)decodeCopyFromBufferToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001360
- (id)getTextureForReferenceNonNull:(unsigned int)arg1;	// IMP=0x00000000000012f0
- (id)getBufferForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001280
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x00000000000011c1
- (void)dealloc;	// IMP=0x0000000000001186
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000001120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

