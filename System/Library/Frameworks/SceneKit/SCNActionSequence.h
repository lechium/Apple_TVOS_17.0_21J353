//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCNActionSequence : SCNAction
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
}

+ (id)sequenceWithActions:(id)arg1;	// IMP=0x00600000002894db
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002893b3
- (id)reversedAction;	// IMP=0x0000000000289b05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000289a4d
- (_Bool)isCustom;	// IMP=0x00000000002893bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000289314
- (void)dealloc;	// IMP=0x00000000002892d2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000288f27
- (id)init;	// IMP=0x0000000000288e3c

@end

