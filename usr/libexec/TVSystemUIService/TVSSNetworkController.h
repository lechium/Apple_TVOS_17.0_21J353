//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEConfigurationManager, NSArray, NSNumber, NSString, NWSystemPathMonitor, TVSObserverSet, TVSSNetworkState, TVSWiFiNetwork, UIImage;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, TVSSNetworkInterfaceManaging;

@interface TVSSNetworkController : NSObject
{
    id <TVSSNetworkInterfaceManaging> _networkInterfaceManager;	// 8 = 0x8
    TVSObserverSet *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_publishNetworkStateDataSource;	// 24 = 0x18
    NWSystemPathMonitor *_systemPathMonitor;	// 32 = 0x20
    NEConfigurationManager *_configurationManager;	// 40 = 0x28
    TVSSNetworkState *_networkState;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    TVSWiFiNetwork *_currentWiFiNetwork;	// 72 = 0x48
    NSArray *_vpnConfigurations;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0010000000046fe0
@property(retain, nonatomic) NSArray *vpnConfigurations; // @synthesize vpnConfigurations=_vpnConfigurations;
@property(retain, nonatomic) TVSWiFiNetwork *currentWiFiNetwork; // @synthesize currentWiFiNetwork=_currentWiFiNetwork;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) TVSSNetworkState *networkState; // @synthesize networkState=_networkState;
- (void)_publishNetworkState;	// IMP=0x0010000000046ba0
- (id)_latestNetworkState;	// IMP=0x0010000000046980
- (void)_notePublishNetworkStateNeeded;	// IMP=0x0010000000046940
- (void)_loadVPNConfigurations;	// IMP=0x00100000000466a0
- (void)_stopObservingConfigurationManager;	// IMP=0x0010000000046660
- (void)_startObservingConfigurationManager;	// IMP=0x0010000000046510
- (void)_stopObservingSystemPathMonitor;	// IMP=0x00100000000464d0
- (void)_startObservingSystemPathMonitor;	// IMP=0x0010000000046480
- (void)_stopObservingNetworkInterfaceManager;	// IMP=0x0010000000046450
- (void)_startObservingNetworkInterfaceManager;	// IMP=0x0010000000046420
- (void)_stopObservingNetworkInterfaceKVONotifications;	// IMP=0x0010000000046360
- (void)_startObservingNetworkInterfaceKVONotifications;	// IMP=0x0010000000046290
- (void)_stopObservingNotifications;	// IMP=0x0010000000046200
- (void)_startObservingNotifications;	// IMP=0x0010000000046160
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000046010
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000045f60
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000045ec0
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000045d90
- (id)succinctDescription;	// IMP=0x0010000000045d20
- (void)networkInterfaceManager:(id)arg1 didChangeInternetAvailability:(_Bool)arg2;	// IMP=0x0010000000045c10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000455b0
- (void)_handlePhysicalNetworkStateChangedNotification:(id)arg1;	// IMP=0x00100000000454a0
- (void)_handleInternetAvailabilityChangedNotification:(id)arg1;	// IMP=0x0010000000045390
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000045330
- (void)addObserver:(id)arg1;	// IMP=0x00100000000452d0
- (void)invalidate;	// IMP=0x0010000000045220
- (void)dealloc;	// IMP=0x00100000000451d0
- (id)init;	// IMP=0x0010000000045140
- (id)initWithNetworkInterfaceManager:(id)arg1;	// IMP=0x0010000000044ce0
@property(nonatomic) _Bool contentIsSelected;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

