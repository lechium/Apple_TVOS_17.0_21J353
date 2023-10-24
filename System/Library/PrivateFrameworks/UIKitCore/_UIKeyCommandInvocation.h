//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIKeyCommand, UIPhysicalKeyboardEvent;

__attribute__((visibility("hidden")))
@interface _UIKeyCommandInvocation : NSObject
{
    UIKeyCommand *_keyCommand;	// 8 = 0x8
    UIPhysicalKeyboardEvent *_triggeringEvent;	// 16 = 0x10
    id _target;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000074112d
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) UIPhysicalKeyboardEvent *triggeringEvent; // @synthesize triggeringEvent=_triggeringEvent;
@property(readonly, nonatomic) UIKeyCommand *keyCommand; // @synthesize keyCommand=_keyCommand;
- (id)initWithKeyCommand:(id)arg1 triggeringEvent:(id)arg2 target:(id)arg3;	// IMP=0x0000000000741048

@end
