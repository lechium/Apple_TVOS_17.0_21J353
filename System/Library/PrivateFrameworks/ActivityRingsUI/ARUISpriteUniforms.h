//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUISpriteUniforms : NSObject
{
    CDStruct_8ce0c528 _uniforms;	// 16 = 0x10
    CDStruct_d98db243 _vertexAttributes;	// 48 = 0x30
}

@property(readonly, nonatomic) CDStruct_8ce0c528 uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, nonatomic) CDStruct_d98db243 vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
- (void)_updateUniformsWithSprite:(id)arg1;	// IMP=0x000000000000e56d
- (void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2;	// IMP=0x000000000000e2eb
- (void *)uniformsBytes;	// IMP=0x000000000000e2e1
- (void *)vertexAttributesBytes;	// IMP=0x000000000000e2d7
- (id)initWithSprite:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000000e236

@end

