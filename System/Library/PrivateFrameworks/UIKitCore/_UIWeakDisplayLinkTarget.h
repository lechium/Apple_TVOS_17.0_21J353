//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakDisplayLinkTarget : NSObject
{
    id _target;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
}

+ (SEL)displayLinkAction;	// IMP=0x004000000127067e
- (void).cxx_destruct;	// IMP=0x000000000127068b
- (void)_displayLinkTick:(id)arg1;	// IMP=0x00000000012705f9
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000127049b

@end

