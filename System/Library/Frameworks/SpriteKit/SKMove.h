//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKMove : SKAction
{
    struct SKCMove *_mycaction;	// 8 = 0x8
}

+ (id)moveByY:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000101b0
+ (id)moveToY:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000010115
+ (id)moveByX:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000010073
+ (id)moveToX:(double)arg1 duration:(double)arg2;	// IMP=0x006000000000ffd8
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x006000000000ff46
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x006000000000ff2d
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x006000000000fe95
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x006000000000fe7c
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000f418
- (id)reversedAction;	// IMP=0x00000000000102de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010252
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fa80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f52e
- (id)init;	// IMP=0x000000000000f420

@end
