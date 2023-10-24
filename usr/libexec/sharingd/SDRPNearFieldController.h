//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPNearFieldController;
@protocol OS_dispatch_queue, SDRPNearFieldControllerDelegate, SDRPNearFieldTransaction;

@interface SDRPNearFieldController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RPNearFieldController *_nearFieldController;	// 16 = 0x10
}

+ (_Bool)isAvailable;	// IMP=0x004000000009104b
- (void).cxx_destruct;	// IMP=0x00200000000915c6
@property(readonly, nonatomic) RPNearFieldController *nearFieldController; // @synthesize nearFieldController=_nearFieldController;
@property(readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)invalidateTransaction:(id)arg1 updatedPkData:(id)arg2 bonjourListenerUUID:(id)arg3;	// IMP=0x001000000009145d
- (void)stop;	// IMP=0x00100000000913dd
- (void)startPolling:(long long)arg1 withApplicationLabel:(id)arg2 pkData:(id)arg3 bonjourListenerUUID:(id)arg4;	// IMP=0x00100000000912b1
@property(readonly, nonatomic) id <SDRPNearFieldTransaction> currentTransaction;
@property(readonly, copy, nonatomic) NSString *currentApplicationLabel;
@property(readonly, nonatomic) long long currentPreferredPollingType;
@property(readonly, nonatomic) __weak id <SDRPNearFieldControllerDelegate> delegate;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000091063

@end

