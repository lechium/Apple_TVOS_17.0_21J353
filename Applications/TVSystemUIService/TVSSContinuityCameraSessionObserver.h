//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceDiscoverySession, NSString, RPRemoteDisplayDiscovery, TVSObserverSet;

@interface TVSSContinuityCameraSessionObserver : NSObject
{
    RPRemoteDisplayDiscovery *_remoteDisplayDiscovery;	// 8 = 0x8
    AVCaptureDeviceDiscoverySession *_captureDiscoverySession;	// 16 = 0x10
    TVSObserverSet *_observerSet;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000017030
- (void).cxx_destruct;	// IMP=0x0020000000017f70
@property(readonly, nonatomic) TVSObserverSet *observerSet; // @synthesize observerSet=_observerSet;
@property(retain, nonatomic) AVCaptureDeviceDiscoverySession *captureDiscoverySession; // @synthesize captureDiscoverySession=_captureDiscoverySession;
@property(retain, nonatomic) RPRemoteDisplayDiscovery *remoteDisplayDiscovery; // @synthesize remoteDisplayDiscovery=_remoteDisplayDiscovery;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000017b20
@property(readonly, nonatomic) AVCaptureDevice *continuityCaptureDevice;
@property(readonly, nonatomic) NSString *connectedDeviceName;
- (void)activateRemoteDisplayDiscovery;	// IMP=0x0010000000017340
- (void)dealloc;	// IMP=0x00100000000172c0
- (id)init;	// IMP=0x0010000000017120

@end

