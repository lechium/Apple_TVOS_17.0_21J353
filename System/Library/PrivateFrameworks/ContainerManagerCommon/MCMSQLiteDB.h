//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMSQLiteDB : NSObject
{
    id <MCMSQLiteDBCodeSigningPeerageDelegate> _peerageDelegate;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000a391c
+ (_Bool)moveDBWithURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 error:(id *)arg4;	// IMP=0x00600000000a33b9
- (void).cxx_destruct;	// IMP=0x00000000000a3365
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) __weak id <MCMSQLiteDBCodeSigningPeerageDelegate> peerageDelegate; // @synthesize peerageDelegate=_peerageDelegate;
- (_Bool)deleteAllInvalidPluginCodeSigningEntriesWithNumChanges:(int *)arg1 error:(id *)arg2;	// IMP=0x00000000000a2de4
- (id)childParentMapWithError:(id *)arg1;	// IMP=0x00000000000a2897
- (_Bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)arg1;	// IMP=0x00000000000a23b4
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a1e0f
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a17d1
- (id)identifiersWithError:(id *)arg1;	// IMP=0x00000000000a1282
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a0b03
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a032b
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a0216
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009fe9a
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009fdaf
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009f74a
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009f272
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x000000000009eefd
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009edab
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009e75e
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009e525
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000009dcd6
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009db4e
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009db08
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;	// IMP=0x000000000009dabd
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;	// IMP=0x000000000009d517
- (void)closeDB;	// IMP=0x000000000009d33c
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d1e7
- (void)dealloc;	// IMP=0x000000000009d186
- (id)initWithURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009d06a

@end

