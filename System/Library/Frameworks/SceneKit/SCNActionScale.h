//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale *_mycaction;	// 8 = 0x8
}

+ (id)scaleTo:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002b5a5a
+ (id)scaleBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002b59c4
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002b59bc
- (_Bool)isRelative;	// IMP=0x00000000002b5c81
- (id)parameters;	// IMP=0x00000000002b5c05
- (id)reversedAction;	// IMP=0x00000000002b5b57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b5acd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b5836
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b55fa
- (id)init;	// IMP=0x00000000002b5512

@end

