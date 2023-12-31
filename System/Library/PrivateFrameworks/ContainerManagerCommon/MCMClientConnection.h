//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCMCommandContext;

__attribute__((visibility("hidden")))
@interface MCMClientConnection : NSObject
{
    id <MCMCommandContext> _context;	// 8 = 0x8
}

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;	// IMP=0x006000000001a75e
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x006000000001a63f
+ (id)sharedClientConnection;	// IMP=0x006000000001a5e4
- (void).cxx_destruct;	// IMP=0x0000000000018956
@property(readonly, nonatomic) id <MCMCommandContext> context; // @synthesize context=_context;
- (id)_commandForResumedDeleteOperationsWithResultPromise:(id)arg1;	// IMP=0x0000000000018725
- (void)_resumeDeleteOperations;	// IMP=0x00000000000185de
- (void)_regenerateAllSystemContainerPaths;	// IMP=0x0000000000017f96
- (void)rebootContainerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001799e
- (void)rebootContainerManagerSetup;	// IMP=0x000000000001763c
- (void)_cleanupOprhanedCodeSigningMappingData;	// IMP=0x000000000001751b
- (_Bool)_containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;	// IMP=0x00000000000173bc
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2 forUserIdentity:(id)arg3;	// IMP=0x0000000000016a75
- (void)containerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000164be
- (void)containerManagerSetup;	// IMP=0x0000000000015439
- (id)clientBundleIdentifier;	// IMP=0x0000000000015375
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000152ea
- (id)init;	// IMP=0x000000000001519f

@end

