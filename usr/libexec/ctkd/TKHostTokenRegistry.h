//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, NSXPCListener, TKHostKeychainHandler, TKHostTokenDriverCache;
@protocol TKHostTokenRegistryDelegate;

@interface TKHostTokenRegistry : NSObject
{
    NSDictionary *_tokenExtensions;	// 8 = 0x8
    long long _transactionCounter;	// 16 = 0x10
    _Bool _storageDirty;	// 24 = 0x18
    NSMutableArray *_keychainItemsDirty;	// 32 = 0x20
    NSHashTable *_clientConnections;	// 40 = 0x28
    _Bool _resetDB;	// 48 = 0x30
    NSXPCListener *_listener;	// 56 = 0x38
    TKHostKeychainHandler *_keychain;	// 64 = 0x40
    id <TKHostTokenRegistryDelegate> _delegate;	// 72 = 0x48
    TKHostTokenDriverCache *_driverCache;	// 80 = 0x50
    NSUserDefaults *_storage;	// 88 = 0x58
    NSArray *_tokenClassIDs;	// 96 = 0x60
    NSMutableArray *_externalTransactions;	// 104 = 0x68
    NSMutableDictionary *_pendingCreationTokens;	// 112 = 0x70
    NSMutableDictionary *_tokensByTokenID;	// 120 = 0x78
}

+ (id)allowedBundlesFromEntitlements:(id)arg1;	// IMP=0x0020000000003ae1
+ (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x001000000000373a
- (void).cxx_destruct;	// IMP=0x0020000000006eb7
@property(readonly, nonatomic) NSMutableDictionary *tokensByTokenID; // @synthesize tokensByTokenID=_tokensByTokenID;
@property(readonly, nonatomic) NSMutableDictionary *pendingCreationTokens; // @synthesize pendingCreationTokens=_pendingCreationTokens;
@property(readonly, nonatomic) NSMutableArray *externalTransactions; // @synthesize externalTransactions=_externalTransactions;
@property(readonly, nonatomic) NSArray *tokenClassIDs; // @synthesize tokenClassIDs=_tokenClassIDs;
@property(nonatomic) _Bool resetDB; // @synthesize resetDB=_resetDB;
@property(readonly, nonatomic) NSUserDefaults *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) TKHostTokenDriverCache *driverCache; // @synthesize driverCache=_driverCache;
@property(nonatomic) __weak id <TKHostTokenRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TKHostKeychainHandler *keychain; // @synthesize keychain=_keychain;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)registerClassIDs:(id)arg1;	// IMP=0x0010000000006901
- (id)reloadTokenClassesFromStore;	// IMP=0x0010000000005c64
- (void)loadTokensFromStore:(id)arg1;	// IMP=0x0010000000004e70
- (id)createTokenWithTokenID:(id)arg1 persistent:(_Bool)arg2;	// IMP=0x0010000000004c52
- (void)notifyTokenReinsertion:(id)arg1;	// IMP=0x0010000000004b4b
- (void)removeTokenWithTokenID:(id)arg1;	// IMP=0x00100000000048f9
- (id)tokenWithTokenID:(id)arg1;	// IMP=0x0010000000004830
- (void)commitTransaction;	// IMP=0x00100000000041c2
- (void)keychainItemsModified:(id)arg1;	// IMP=0x001000000000412e
- (void)markModified;	// IMP=0x00100000000040fc
@property(readonly, nonatomic) NSDictionary *tokenExtensions;
- (id)beginTransaction;	// IMP=0x0000000000003fd5
@property(readonly, nonatomic) NSArray *tokens;
- (void)dealloc;	// IMP=0x0010000000003f2f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003cfb
- (id)initWithDriverCache:(id)arg1 listener:(id)arg2 keychain:(id)arg3;	// IMP=0x0010000000003575

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

