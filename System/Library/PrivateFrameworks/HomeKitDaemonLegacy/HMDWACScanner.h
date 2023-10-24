//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUWiFiScanner, NSString;
@protocol HMDWACScannerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWACScanner : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CUWiFiScanner *_wifiScanner;	// 16 = 0x10
    id <HMDWACScannerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000612fde
- (void).cxx_destruct;	// IMP=0x00000000006109e1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2;	// IMP=0x0000000000610912
- (void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2;	// IMP=0x0000000000610885
- (void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2;	// IMP=0x00000000006107f8
- (void)stop;	// IMP=0x00000000006107ad
- (void)resume;	// IMP=0x0000000000610762
- (void)backoff;	// IMP=0x0000000000610717
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1;	// IMP=0x000000000061068a
- (void)start;	// IMP=0x000000000061063f
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000610588
- (id)init;	// IMP=0x00000000006104fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

