//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TXRDeferredTextureInfo, TXRTextureInfo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TXRParserKTX : NSObject
{
    TXRTextureInfo *_textureInfo;	// 8 = 0x8
    unsigned int _bytesOfKeyValueData;	// 16 = 0x10
    _Bool _isCompressed;	// 20 = 0x14
    NSDictionary *_internalSizedFormatLookup;	// 24 = 0x18
    TXRDeferredTextureInfo *_deferredTextureInfo;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_parserQueue;	// 40 = 0x28
    _Bool _shouldFlipVertically;	// 48 = 0x30
}

+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ba7f7
+ (_Bool)handlesData:(id)arg1;	// IMP=0x00100000000b9498
- (void).cxx_destruct;	// IMP=0x00000000000bb55d
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;	// IMP=0x00000000000ba6e0
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;	// IMP=0x00000000000ba488
- (void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3;	// IMP=0x00000000000b98c4
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b9509

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

