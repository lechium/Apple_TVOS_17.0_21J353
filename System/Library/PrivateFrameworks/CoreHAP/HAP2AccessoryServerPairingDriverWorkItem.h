//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAP2SerializedOperationQueue, HMFActivity, NSString;
@protocol HAP2AccessoryServerPairingDriverWorkItemInfo;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject
{
    id <HAP2AccessoryServerPairingDriverWorkItemInfo> _pairingDriver;	// 8 = 0x8
    HAP2SerializedOperationQueue *_operationQueue;	// 16 = 0x10
    HMFActivity *_pairingActivity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006edbc
@property(readonly, nonatomic) __weak HMFActivity *pairingActivity; // @synthesize pairingActivity=_pairingActivity;
@property(readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000006ecde
- (void)runForPairingDriver:(id)arg1;	// IMP=0x000000000006ec2a
@property(readonly, copy) NSString *description;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000006e98c
- (void)startWithPairingDriver:(id)arg1;	// IMP=0x000000000006e813
@property(readonly, nonatomic) __weak id <HAP2AccessoryServerPairingDriverWorkItemInfo> pairingDriver; // @synthesize pairingDriver=_pairingDriver;
- (id)maybePairingDriver;	// IMP=0x000000000006e7e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

