//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITraitRegistration : NSObject
{
    _Bool _targetIsSender;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    id _target;	// 24 = 0x18
    SEL _action;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000099c4ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000099c4a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

