//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSUUID;

@interface XCTDAutomationModeInterface : NSObject
{
    _Bool _isAutomationModeCurrentlyEnabled;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    NSUUID *_registrationToken;	// 24 = 0x18
    CDStruct_6bdebbfa _automationModeFunctions;	// 32 = 0x20
}

+ (id)sharedInterface;	// IMP=0x002000000003da22
+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x001000000003d7d9
- (void).cxx_destruct;	// IMP=0x002000000003e52a
@property(copy) NSUUID *registrationToken; // @synthesize registrationToken=_registrationToken;
@property _Bool isAutomationModeCurrentlyEnabled; // @synthesize isAutomationModeCurrentlyEnabled=_isAutomationModeCurrentlyEnabled;
@property(retain) NSMutableSet *clients; // @synthesize clients=_clients;
@property(readonly) CDStruct_6bdebbfa automationModeFunctions; // @synthesize automationModeFunctions=_automationModeFunctions;
- (void)unregisterAutomationModeChangeHandlerWithToken:(id)arg1;	// IMP=0x001000000003e452
- (id)registerAutomationModeChangeHandlerOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e3c9
- (void)disableAutomationModeForClient:(id)arg1;	// IMP=0x001000000003e0be
- (_Bool)enableAutomationModeForClient:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003de7b
@property(readonly) _Bool isAutomationModeEnabled;
- (void)dealloc;	// IMP=0x001000000003ddd1
- (id)initForUnsupportedSystems;	// IMP=0x001000000003dd88
- (id)initWithAutomationModeFunctions:(CDStruct_6bdebbfa)arg1;	// IMP=0x001000000003db17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

