//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIPress, UIPressesEvent, UIResponder;

__attribute__((visibility("hidden")))
@interface _UIRIPReceiver : NSObject
{
    UIPressesEvent *_event;	// 8 = 0x8
    UIResponder *_responder;	// 16 = 0x10
    Class _clazz;	// 24 = 0x18
    long long _phase;	// 32 = 0x20
    UIPress *_press;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007d5cbc
@property(readonly, nonatomic) UIPress *press; // @synthesize press=_press;
@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) Class clazz; // @synthesize clazz=_clazz;
@property(readonly, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
- (id)description;	// IMP=0x00000000007d5bfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d5b81
- (unsigned long long)hash;	// IMP=0x00000000007d5b6b
- (id)initWithResponder:(id)arg1 class:(Class)arg2 press:(id)arg3 inPhase:(long long)arg4 withEvent:(id)arg5;	// IMP=0x00000000007d5a91

@end

