//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface PBAttentionMonitorStateMachine : NSObject
{
    long long _state;	// 8 = 0x8
    _Bool _automaticEnabled;	// 16 = 0x10
    _Bool _enteredOnStateAutomatically;	// 17 = 0x11
    NSUUID *_automaticOnStateChangeConfirmationID;	// 24 = 0x18
    double _enabledOffset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b24b
@property(nonatomic) double enabledOffset; // @synthesize enabledOffset=_enabledOffset;
- (void)_enterOffStateForced;	// IMP=0x001000000000b22f
- (void)_enterOnStateForced;	// IMP=0x001000000000b229
- (void)_enterOffStateAutomatically;	// IMP=0x001000000000b223
- (void)_enterOnStateAutomatically;	// IMP=0x001000000000b21d
- (void)_cancelAutomaticOnStateChangeConfirmation;	// IMP=0x001000000000b217
- (void)_confirmAutomaticOnStateChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b206
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x001000000000b1fe
- (id)_logString;	// IMP=0x001000000000b18b
- (void)_cancelAutomaticOnStateChangeConfirmationIfNeeded;	// IMP=0x001000000000b155
@property(readonly, nonatomic) _Bool enteredOnStateAutomatically;
- (void)enterOffStateForced;	// IMP=0x001000000000b033
- (void)enterOnStateForced;	// IMP=0x001000000000af1a
- (void)enterOffStateAutomatically;	// IMP=0x001000000000ae01
- (void)adjustStateAutomatically;	// IMP=0x001000000000a853
- (void)automaticDisable;	// IMP=0x001000000000a78a
- (void)automaticEnable;	// IMP=0x001000000000a6c1
@property(readonly, nonatomic, getter=isAutomaticEnabled) _Bool automaticEnabled;
- (void)_setStateOff;	// IMP=0x001000000000a5ea
- (void)_setStateOn;	// IMP=0x001000000000a51c
@property(readonly, nonatomic) _Bool isOn;
@property(readonly, nonatomic) _Bool isOff;
- (id)init;	// IMP=0x001000000000a4bc

@end

