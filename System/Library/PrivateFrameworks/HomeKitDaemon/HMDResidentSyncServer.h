//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFMessageDispatcher, NSPersistentHistoryToken, NSPersistentStore;
@protocol HMDResidentDeviceManager, HMDResidentSyncServerDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDResidentSyncServer
{
    HMFMessageDispatcher *_dispatcher;	// 56 = 0x38
    id <HMDResidentDeviceManager> _residentDeviceManager;	// 64 = 0x40
    NSPersistentStore *_store;	// 72 = 0x48
    NSPersistentHistoryToken *_storeExemplarToken;	// 80 = 0x50
    _Bool _isPrimaryResident;	// 88 = 0x58
    NSPersistentHistoryToken *_currentToken;	// 96 = 0x60
    id <HMDResidentSyncServerDataSource> _dataSource;	// 104 = 0x68
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000806ea8
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (id)decodeToken:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000806d16
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x0000000000806be6
- (void)handlePersistentStoreChanged:(id)arg1;	// IMP=0x0000000000806a7c
- (long long)currentToken:(id *)arg1 andHistory:(id *)arg2 fromToken:(id)arg3 limit:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000806815
- (void)_handleFetchHomeData:(id)arg1;	// IMP=0x00000000008066e9
- (void)interceptRemoteResidentRequest:(id)arg1 proceed:(CDUnknownBlockType)arg2;	// IMP=0x00000000008062c2
- (void)stop;	// IMP=0x0000000000806282
- (id)start;	// IMP=0x0000000000805fd5
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 dispatcher:(id)arg3 residentDeviceManager:(id)arg4 notificationCenter:(id)arg5 persistence:(id)arg6 dataSource:(id)arg7 logEventSubmitter:(id)arg8;	// IMP=0x0000000000805d79

@end

