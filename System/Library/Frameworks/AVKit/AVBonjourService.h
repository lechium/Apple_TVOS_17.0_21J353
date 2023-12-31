//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNetService, NSString;
@protocol AVBonjourServiceDelegate;

__attribute__((visibility("hidden")))
@interface AVBonjourService : NSObject
{
    NSNetService *_networkService;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    id _deviceInfoChangedObserver;	// 24 = 0x18
    id _playerItemChangedObserver;	// 32 = 0x20
    NSString *_netServiceType;	// 40 = 0x28
    id <AVBonjourServiceDelegate> _delegate;	// 48 = 0x30
}

+ (id)_defaultTXTRecordWithDeviceInfo:(void **)arg1;	// IMP=0x00100000000f0358
- (void).cxx_destruct;	// IMP=0x00000000000eff04
@property(nonatomic) __weak id <AVBonjourServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *netServiceType; // @synthesize netServiceType=_netServiceType;
- (void)_initializeBonjourServiceWithDeviceInfo:(void *)arg1;	// IMP=0x00000000000efd0f
- (id)txtRecordDataForDevice:(void *)arg1;	// IMP=0x00000000000ef96c
- (void)netMethodService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x00000000000ef793
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x00000000000ef6ef
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00000000000ef560
- (void)_restartService;	// IMP=0x00000000000ef413
- (void)stop;	// IMP=0x00000000000ef3e8
- (void)start;	// IMP=0x00000000000ef2be
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000ef10b
- (id)initWithNetServiceType:(id)arg1;	// IMP=0x00000000000eee22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

