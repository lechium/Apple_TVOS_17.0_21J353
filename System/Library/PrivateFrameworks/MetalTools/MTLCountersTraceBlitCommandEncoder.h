//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLCountersTraceBlitCommandEncoder
{
}

- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x0000000000040d69
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000040bc3
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000040b2a
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x0000000000040aad
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000040a14
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x0000000000040997
- (void)waitForFence:(id)arg1;	// IMP=0x000000000004091a
- (void)updateFence:(id)arg1;	// IMP=0x000000000004089d
- (void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000040804
- (void)synchronizeResource:(id)arg1;	// IMP=0x0000000000040787
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x000000000004070a
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x000000000004067c
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x00000000000404f9
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x0000000000040345
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x00000000000400f2
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x000000000003ff53
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x000000000003fe53
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x000000000003fd52
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000003fb33
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x000000000003f85b
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000003f52d
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x000000000003f2f7
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000003efcd
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x000000000003edc3
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x000000000003ed08
- (id)init:(struct BinaryBuffer *)arg1;	// IMP=0x000000000003ecd4

@end

