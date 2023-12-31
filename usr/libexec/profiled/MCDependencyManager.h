//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader
{
    NSMutableDictionary *_memberQueueSystemOrphansDict;	// 8 = 0x8
    NSMutableDictionary *_memberQueueUserOrphansDict;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x004000000005e3c0
- (void).cxx_destruct;	// IMP=0x00200000000605d8
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserOrphansDict; // @synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemOrphansDict; // @synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x00100000000603c4
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x00100000000603a9
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x00100000000601a5
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x001000000006018a
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005fd84
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005fd5c
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005f9f7
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005f9cf
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005f5fb
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005f5d3
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005f3c5
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005f39d
- (id)memberQueueOrphanedParentsInUserDomain:(id)arg1;	// IMP=0x001000000005f323
- (id)memberQueueOrphanedParentsInSystemDomain:(id)arg1;	// IMP=0x001000000005f2a9
- (id)orphanedParentsForUserDomain:(id)arg1;	// IMP=0x001000000005f101
- (id)orphanedParentsForSystemDomain:(id)arg1;	// IMP=0x001000000005ef59
- (id)orphanedParentsForDomain:(id)arg1;	// IMP=0x001000000005ecb2
- (void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000005ea22
- (void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000005e764
- (void)commitChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e4fd
- (void)commitChanges;	// IMP=0x001000000005e455
- (id)_init;	// IMP=0x001000000005e3d2

@end

