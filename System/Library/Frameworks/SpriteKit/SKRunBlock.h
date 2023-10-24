//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKRunBlock : SKAction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00600000000597e7
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000059598
- (void).cxx_destruct;	// IMP=0x00000000000598ef
- (id)reversedAction;	// IMP=0x00000000000598d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005989a
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000059729
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059681
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059612
- (id)init;	// IMP=0x00000000000595a0

@end

