//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSDAccountsControllerDelegate, OS_dispatch_queue;

@interface CSDAccountsController : NSObject
{
    id <CSDAccountsControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_outgoingCallerID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006acc4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *outgoingCallerID; // @synthesize outgoingCallerID=_outgoingCallerID;
@property(nonatomic) __weak id <CSDAccountsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isValidOutgoingCallerID:(id)arg1;	// IMP=0x001000000006abfb
- (void)_updateOutgoingCallerID;	// IMP=0x001000000006a601
- (void)updateOutgoingCallerIDAndSendDelegateCallbacksIfNecessary;	// IMP=0x001000000006a4ec
- (long long)_faceTimeVideoAvailability;	// IMP=0x001000000006a498
- (long long)_faceTimeAudioAvailability;	// IMP=0x001000000006a441
@property(readonly, nonatomic, getter=isFaceTimeVideoAvailable) _Bool faceTimeVideoAvailable;
@property(readonly, nonatomic, getter=isFaceTimeAudioAvailable) _Bool faceTimeAudioAvailable;
@property(readonly, nonatomic) _Bool faceTimeIDMatchesAppleID;
- (void)devicesChanged:(id)arg1;	// IMP=0x0010000000069e35
- (void)serviceAvailabilityChanged:(id)arg1;	// IMP=0x0010000000069cb0
- (void)callerIDChanged:(id)arg1;	// IMP=0x0010000000069b55
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0010000000069a0f
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0010000000069818
- (id)init;	// IMP=0x0010000000069370

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

