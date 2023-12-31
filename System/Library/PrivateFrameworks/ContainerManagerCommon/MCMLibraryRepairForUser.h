//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMManagedUserPathRegistry;

__attribute__((visibility("hidden")))
@interface MCMLibraryRepairForUser
{
    MCMManagedUserPathRegistry *_userRegistry;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ad642
@property(readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry; // @synthesize userRegistry=_userRegistry;
- (_Bool)_canRepairLocally;	// IMP=0x00000000000ad4e6
- (id)_managedPathFromContainerClassPath:(id)arg1 registry:(id)arg2;	// IMP=0x00000000000ad2de
- (id)_setByAddingContainerClassPathsToSet:(id)arg1 registry:(id)arg2;	// IMP=0x00000000000ad15b
- (id)_managedPathsForGenericRepair;	// IMP=0x00000000000ad0ad
- (_Bool)performRepairForContainerPath:(id)arg1 containerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ac689
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerPath:(id)arg2 containerIdentifier:(id)arg3 error:(id *)arg4 duringBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ac59c
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerRootURL:(id)arg2 error:(id *)arg3 duringBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ac4c1
- (id)initWithManagedUserPathRegistry:(id)arg1 fileManager:(id)arg2;	// IMP=0x00000000000ac423

@end

