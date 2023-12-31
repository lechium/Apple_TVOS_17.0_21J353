//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXOwnedDataPromiseSeed, NSError, NSString, NSURL;

@interface IXSOwnedDataPromise
{
    _Bool _stagedPathMayNotExistWhenAwakening;	// 8 = 0x8
    NSString *_relativeStagedPath;	// 16 = 0x10
    NSString *_targetLastPathComponent;	// 24 = 0x18
    NSError *_awakeningError;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002af50
- (void).cxx_destruct;	// IMP=0x001000000002bf84
@property(retain, nonatomic) NSError *awakeningError; // @synthesize awakeningError=_awakeningError;
@property(nonatomic) _Bool stagedPathMayNotExistWhenAwakening; // @synthesize stagedPathMayNotExistWhenAwakening=_stagedPathMayNotExistWhenAwakening;
- (_Bool)issueSandboxExtensionWithError:(id *)arg1;	// IMP=0x001000000002bb77
@property(retain, nonatomic) NSURL *stagedPath; // @dynamic stagedPath;
- (void)_internal_setStagedPath:(id)arg1;	// IMP=0x001000000002b850
@property(retain, nonatomic) NSString *targetLastPathComponent; // @synthesize targetLastPathComponent=_targetLastPathComponent;
@property(retain, nonatomic) NSString *relativeStagedPath; // @synthesize relativeStagedPath=_relativeStagedPath;
@property(readonly, nonatomic) NSURL *stagingBaseDir; // @dynamic stagingBaseDir;
- (void)decommission;	// IMP=0x001000000002b472
- (void)setComplete:(_Bool)arg1;	// IMP=0x001000000002b385
- (_Bool)validateStagedPathWithError:(id *)arg1;	// IMP=0x001000000002b07e
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000002afd0
- (void)reset;	// IMP=0x001000000002af58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002ae6a
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002aca2
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002a9ed
- (_Bool)_onQueue_initWithSeedWithError:(id *)arg1;	// IMP=0x001000000002a995
- (void)_onQueue_purgeStagingBaseDirKeepingBaseDir:(_Bool)arg1;	// IMP=0x001000000002a6f5
- (_Bool)_onQueue_createStagingBaseDirWithError:(id *)arg1;	// IMP=0x001000000002a137
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000002c93e
- (oneway void)_remote_getTargetLastPathComponent:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c7b8
- (oneway void)_remote_setTargetLastPathComponent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c5c5
- (oneway void)_remote_getStagedPath:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c3da
- (oneway void)_remote_setStagedPath:(id)arg1;	// IMP=0x001000000002bfc6

// Remaining properties
@property(readonly, copy, nonatomic) IXOwnedDataPromiseSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXOwnedDataPromiseSeed *seed; // @dynamic seed;

@end

