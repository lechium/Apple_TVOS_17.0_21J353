//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, TVSStateMachine;

@interface PBAXFeatureManager : NSObject
{
    NSArray *_pendingUpdates;	// 8 = 0x8
    CDUnknownBlockType _updateCompletion;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000001befe8
- (void).cxx_destruct;	// IMP=0x00200000001c2add
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
- (id)_defaultTripleClickOptions;	// IMP=0x00100000001c2a66
- (void)_cancelPendingUpdates;	// IMP=0x00100000001c29e0
- (void)_servicePendingUpdates;	// IMP=0x00100000001c26ed
- (void)_applyUpdatesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c263d
- (id)_updatesForConfigurationOptions:(id)arg1;	// IMP=0x00100000001c15d5
- (id)_currentConfigOptions;	// IMP=0x00100000001c0fb4
- (id)_handleSetDefaultConfiguration:(id)arg1;	// IMP=0x00100000001c0cee
- (id)_handleSetSingleAppConfiguration:(id)arg1;	// IMP=0x00100000001c09f4
- (void)_initialzeStateMachine;	// IMP=0x00100000001c0589
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x00100000001c04a7
- (_Bool)handleAXShortcutEvent;	// IMP=0x00100000001bf0bb
- (id)init;	// IMP=0x00100000001bf06f

@end

