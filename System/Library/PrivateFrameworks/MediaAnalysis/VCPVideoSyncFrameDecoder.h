//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoSyncFrameDecoder : NSObject
{
    struct CF<OpaqueVTDecompressionSession *> _decompressionSession;	// 8 = 0x8
    _Bool _requiresRotation;	// 16 = 0x10
    struct Rotator *_rotator;	// 24 = 0x18
}

+ (_Bool)isSyncFrameForCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0060000000133a4e
+ (_Bool)readBigEndianInt:(int *)arg1 fromBlockBuffer:(struct OpaqueCMBlockBuffer *)arg2 forNumBytes:(int)arg3 atOffset:(unsigned long long)arg4;	// IMP=0x0060000000133822
- (id).cxx_construct;	// IMP=0x00000000001350f2
- (void).cxx_destruct;	// IMP=0x00000000001350e4
- (_Bool)decodeCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 toCMSampleBuffer:(struct opaqueCMSampleBuffer **)arg2 error:(id *)arg3;	// IMP=0x0000000000134361
- (void)dealloc;	// IMP=0x00000000001337d4
- (id)initWithDecoderSettings:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 rotationAngle:(int)arg3;	// IMP=0x0000000000133120

@end

