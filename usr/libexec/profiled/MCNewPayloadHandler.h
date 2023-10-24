//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject
{
    MCPayload *_payload;	// 8 = 0x8
    MCProfileHandler *_profileHandler;	// 16 = 0x10
    NSArray *_userInputResponses;	// 24 = 0x18
}

+ (id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3;	// IMP=0x004000000001fd42
+ (id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10;	// IMP=0x001000000001fd29
- (void).cxx_destruct;	// IMP=0x002000000001fd96
@property(retain, nonatomic) NSArray *userInputResponses; // @synthesize userInputResponses=_userInputResponses;
@property(readonly, nonatomic) __weak MCProfileHandler *profileHandler; // @synthesize profileHandler=_profileHandler;
@property(readonly, retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000001f962
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4 personaID:(id)arg5;	// IMP=0x001000000001f838
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000001f815
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x001000000001f7fa
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4 personaID:(id)arg5;	// IMP=0x001000000001f6d0
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000001f6ad
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x001000000001f692
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000001f603
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 personaID:(id)arg3;	// IMP=0x001000000001f55a
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x001000000001f4da
- (void)remove;	// IMP=0x001000000001f4d4
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000001f4c2
- (void)unsetAside;	// IMP=0x001000000001f4bc
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000001f4aa
- (void)setAside;	// IMP=0x001000000001f4a4
- (_Bool)isInstalled;	// IMP=0x001000000001f49c
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001f496
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001f490
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x001000000001f48a
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001f482
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000001f47a
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000001f472
- (id)userInputFields;	// IMP=0x001000000001f459
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000001f3bf

@end
