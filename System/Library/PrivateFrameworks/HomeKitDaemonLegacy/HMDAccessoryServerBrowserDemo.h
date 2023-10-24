//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSDictionary, NSMutableArray, NSObject;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser
{
    _Bool _accessoryPaired;	// 12 = 0xc
    id <HAPAccessoryServerBrowserDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSMutableArray *_servers;	// 32 = 0x20
    NSDictionary *_demoData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001d408c
@property(nonatomic) _Bool accessoryPaired; // @synthesize accessoryPaired=_accessoryPaired;
@property(retain, nonatomic) NSDictionary *demoData; // @synthesize demoData=_demoData;
@property(retain, nonatomic) NSMutableArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_handleTestModeConfigRequest:(id)arg1 response:(id *)arg2;	// IMP=0x00000000001d3e45
- (id)_handleTestAccessoryReadValue:(id)arg1;	// IMP=0x00000000001d3e3d
- (id)_handleTestAccessoryGenerateNotification:(id)arg1;	// IMP=0x00000000001d3e35
- (id)_handleTestAccessorySetReachability:(id)arg1;	// IMP=0x00000000001d34b0
- (id)_handleTestAccessorySetValue:(id)arg1 response:(id *)arg2;	// IMP=0x00000000001d1eef
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x00000000001d1e66
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000001d1dae
- (void)resetDemoAccessories;	// IMP=0x00000000001d1d3d
- (void)resetDemoAccessory:(id)arg1;	// IMP=0x00000000001d1bdc
- (void)appendDemoData:(id)arg1;	// IMP=0x00000000001d1aee
- (void)loadDemoData:(id)arg1 finalized:(_Bool)arg2;	// IMP=0x00000000001d19fa
- (void)discoverServer;	// IMP=0x00000000001d1942
- (void)stopDiscoveringAccessoryServers;	// IMP=0x00000000001d1906
- (void)startDiscoveringAccessoryServers;	// IMP=0x00000000001d1895
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001d17b7
- (long long)linkType;	// IMP=0x00000000001d17ac

@end

