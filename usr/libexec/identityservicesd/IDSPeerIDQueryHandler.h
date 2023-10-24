//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery_DualMode, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSPeerIDNetworkChangeNotifier, IDSPeerIDPushHandler, IDSPeerIDQueryHandlerDataSource, IDSPeerIDQueryHandlerDelegate;

@interface IDSPeerIDQueryHandler : NSObject
{
    _Bool _isInServerBackoffMode;	// 8 = 0x8
    FTMessageDelivery_DualMode *_dualInterfaceidQueryMessageDelivery;	// 16 = 0x10
    NSMutableArray *_queryQueue;	// 24 = 0x18
    NSMutableDictionary *_completionBlocksToURIsMap;	// 32 = 0x20
    NSMutableDictionary *_extraCompletionBlocks;	// 40 = 0x28
    NSMutableDictionary *_disasterModeTokens;	// 48 = 0x30
    id <IDSPeerIDNetworkChangeNotifier> _networkChangeNotifier;	// 56 = 0x38
    id <IDSPeerIDPushHandler> _pushHandler;	// 64 = 0x40
    id <IDSPeerIDQueryHandlerDelegate> _delegate;	// 72 = 0x48
    id <IDSPeerIDQueryHandlerDataSource> _dataSource;	// 80 = 0x50
}

+ (int)queryRetryNumberForBadSignature;	// IMP=0x0020000000392f22
+ (double)queryRetryIntervalForBadSignature;	// IMP=0x0010000000392e91
+ (_Bool)isQueryRetryForBadSignatureEnabled;	// IMP=0x0010000000392e11
+ (int)serverBackoffModeReceiverRetryInterval;	// IMP=0x0010000000392d77
+ (int)serverBackoffModeMaxSenderRetries;	// IMP=0x0010000000392ce1
+ (_Bool)isServerBackoffModeActive;	// IMP=0x0010000000392c6b
+ (_Bool)shouldUseSelfTokens;	// IMP=0x0010000000392bc6
- (void).cxx_destruct;	// IMP=0x002000000039b1c2
@property(retain, nonatomic) id <IDSPeerIDQueryHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IDSPeerIDQueryHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IDSPeerIDPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) id <IDSPeerIDNetworkChangeNotifier> networkChangeNotifier; // @synthesize networkChangeNotifier=_networkChangeNotifier;
@property(nonatomic) _Bool isInServerBackoffMode; // @synthesize isInServerBackoffMode=_isInServerBackoffMode;
@property(retain, nonatomic) NSMutableDictionary *disasterModeTokens; // @synthesize disasterModeTokens=_disasterModeTokens;
@property(retain, nonatomic) NSMutableDictionary *extraCompletionBlocks; // @synthesize extraCompletionBlocks=_extraCompletionBlocks;
@property(retain, nonatomic) NSMutableDictionary *completionBlocksToURIsMap; // @synthesize completionBlocksToURIsMap=_completionBlocksToURIsMap;
@property(retain, nonatomic) NSMutableArray *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) FTMessageDelivery_DualMode *dualInterfaceidQueryMessageDelivery; // @synthesize dualInterfaceidQueryMessageDelivery=_dualInterfaceidQueryMessageDelivery;
- (void)removeCompletionBlockForToken:(id)arg1;	// IMP=0x001000000039af91
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2;	// IMP=0x001000000039ad21
- (_Bool)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000039abda
- (void)_dequeuePendingQueryIfPossible;	// IMP=0x0010000000394c24
- (void)_startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000394267
- (void)_removeCompletionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 forRefresh:(_Bool)arg4;	// IMP=0x0010000000393ee8
- (id)_completionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 forRefresh:(_Bool)arg4;	// IMP=0x0010000000393d1b
- (_Bool)_addCompletionBlock:(CDUnknownBlockType)arg1 forURIs:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5;	// IMP=0x0010000000393451
- (void)_bagLoaded:(id)arg1;	// IMP=0x00100000003932a0
- (void)dealloc;	// IMP=0x0010000000393218
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 dualMessageDelivery:(id)arg3 networkChangeNotifier:(id)arg4 pushHandler:(id)arg5;	// IMP=0x00100000003930a5
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000392fa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

