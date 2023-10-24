//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject
{
    CDStruct_ace98575 _description;	// 8 = 0x8
    MISSING_TYPE *_size;	// 16 = 0x10
    unsigned long long _arrayLength;	// 24 = 0x18
    CIImage *_ciImage;	// 32 = 0x20
    NSArray *_sliceTextures;	// 40 = 0x28
    id _texture;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    long long _referenceCount;	// 64 = 0x40
    long long _timeStamp;	// 72 = 0x48
}

@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
- (id)ciImage;	// IMP=0x000000000009209d
- (id)textureForSliceIndex:(unsigned long long)arg1;	// IMP=0x0000000000091f1f
- (_Bool)matchesDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000091e23
@property(readonly, nonatomic) unsigned char renderBufferFormat;
@property(readonly, nonatomic) _Bool viewportDependant;
- (id)description;	// IMP=0x0000000000091d70
- (void)dealloc;	// IMP=0x0000000000091d18
- (id)initWithDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000091cbe

@end

