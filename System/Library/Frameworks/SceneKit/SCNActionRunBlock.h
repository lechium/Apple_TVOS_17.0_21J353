//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNActionRunBlock : SCNAction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x006000000007adfd
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007ac7b
- (id)reversedAction;	// IMP=0x000000000007aec2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ae58
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000007ad22
- (void)dealloc;	// IMP=0x000000000007acdc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ac83
- (_Bool)isCustom;	// IMP=0x000000000007ac73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ac36
- (id)init;	// IMP=0x000000000007abea

@end

