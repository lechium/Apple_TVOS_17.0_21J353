//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKCustomAction : SKAction
{
    struct SKCCustomAction *_mycaction;	// 8 = 0x8
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000000092b2e
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000928b6
- (id)reversedAction;	// IMP=0x0000000000092c64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092bcb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000092a1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000929ab
- (id)init;	// IMP=0x00000000000928be

@end

