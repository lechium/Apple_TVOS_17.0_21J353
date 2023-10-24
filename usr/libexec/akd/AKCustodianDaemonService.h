//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient;

@interface AKCustodianDaemonService : NSObject
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008c245
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (id)_trustedContactOperationsByIDFromArray:(id)arg1;	// IMP=0x001000000008be0a
- (void)performTrustedContactsDataSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b36d
- (_Bool)verifyRecoveryTransactionWithContext:(id)arg1 verifySessionID:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000008afd0
- (void)sendEmbargoEndNotificationFeedbackWithContext:(id)arg1 urlKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008aa62
- (void)fetchCustodianDataRecoveryKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a4f2
- (void)fetchCustodianRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089d39
- (void)startCustodianRecoveryTransactionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089999
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008988f
- (void)startCustodianRecoveryRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089391
- (void)updateCustodianRecoveryKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088eb6
- (void)revokeCustodianWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000889e4
- (void)finalizeCustodianSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088512
- (void)initiateCustodianSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087f52
- (void)dealloc;	// IMP=0x0010000000087ee6
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000087e7b
- (id)init;	// IMP=0x0010000000087e50

@end

