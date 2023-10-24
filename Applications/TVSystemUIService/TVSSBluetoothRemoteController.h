//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSBluetoothRemoteInfo, TVSObserverSet, TVSSBluetoothDevice;
@protocol TVSSBluetoothRemoteManaging;

@interface TVSSBluetoothRemoteController : NSObject
{
    id <TVSSBluetoothRemoteManaging> _manager;	// 8 = 0x8
    TVSObserverSet *_observers;	// 16 = 0x10
    TVSSBluetoothDevice *_currentRemote;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000bebc0
@property(readonly, nonatomic) TVSSBluetoothDevice *currentRemote; // @synthesize currentRemote=_currentRemote;
- (void)_updateCurrentRemote;	// IMP=0x00100000000be7e0
- (id)description;	// IMP=0x00100000000be740
- (void)bluetoothRemoteManagerDidUpdate:(id)arg1;	// IMP=0x00100000000be630
@property(readonly, nonatomic) TVSBluetoothRemoteInfo *currentRemoteInfo;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000be380
- (void)addObserver:(id)arg1;	// IMP=0x00100000000be100
- (id)initWithBluetoothRemoteManager:(id)arg1;	// IMP=0x00100000000be000
- (id)init;	// IMP=0x00100000000bdf70

@end

