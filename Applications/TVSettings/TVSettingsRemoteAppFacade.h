//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVCSEndpointManager;

@interface TVSettingsRemoteAppFacade : NSObject
{
    NSArray *_pairedDevices;	// 8 = 0x8
    NSArray *_pairableDevices;	// 16 = 0x10
    TVCSEndpointManager *_endpointManager;	// 24 = 0x18
}

+ (id)deviceStatusFormatter;	// IMP=0x004000000009233a
- (void).cxx_destruct;	// IMP=0x0020000000093562
@property(readonly, nonatomic) TVCSEndpointManager *endpointManager; // @synthesize endpointManager=_endpointManager;
@property(copy, nonatomic) NSArray *pairableDevices; // @synthesize pairableDevices=_pairableDevices;
@property(copy, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
- (void)_updateRemotesSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092a3f
- (void)_pairDevice:(id)arg1 withPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009297e
- (void)_unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092719
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000926c2
- (void)remoteStatusUpdated:(id)arg1;	// IMP=0x00100000000926ac
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000092696
- (void)dealloc;	// IMP=0x001000000009258d
- (id)init;	// IMP=0x0010000000092434

@end

