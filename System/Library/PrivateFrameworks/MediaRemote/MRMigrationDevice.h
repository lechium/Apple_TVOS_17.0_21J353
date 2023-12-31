//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRNowPlayingPlayerResponse, MRQHONowPlayingController, NSError, NSString;
@protocol MRMigrationDeviceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMigrationDevice : NSObject
{
    _Bool _preparedForAirPlay;	// 8 = 0x8
    unsigned long long _deviceState;	// 16 = 0x10
    NSError *_prepareError;	// 24 = 0x18
    id <MRMigrationDeviceDelegate> _delegate;	// 32 = 0x20
    MRQHONowPlayingController *_controller;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)proactiveDevice;	// IMP=0x00100000000e49d2
- (void).cxx_destruct;	// IMP=0x00000000000e5a60
@property(nonatomic) _Bool preparedForAirPlay; // @synthesize preparedForAirPlay=_preparedForAirPlay;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MRQHONowPlayingController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <MRMigrationDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *prepareError; // @synthesize prepareError=_prepareError;
- (void)_notifyDelegateOfPlayerStateChange;	// IMP=0x00000000000e58b5
- (void)_notifyDelegateOfStateChange;	// IMP=0x00000000000e57a0
- (void)controllerWillReloadForInvalidation:(id)arg1;	// IMP=0x00000000000e570c
- (void)controller:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000e561f
- (void)controller:(id)arg1 didUpdateResponse:(id)arg2;	// IMP=0x00000000000e560d
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;	// IMP=0x00000000000e5543
- (void)_checkIfAirPlayPossible;	// IMP=0x00000000000e5300
- (void)prepare;	// IMP=0x00000000000e5162
@property(nonatomic) unsigned long long deviceState; // @synthesize deviceState=_deviceState;
@property(readonly, nonatomic) _Bool isPrepared;
@property(readonly, nonatomic) MRAVEndpoint *endpoint;
@property(readonly, nonatomic) MRNowPlayingPlayerResponse *playerState;
@property(readonly, nonatomic) NSString *uid;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000e4d56
- (id)dictionaryRepresentation;	// IMP=0x00000000000e4b36
- (id)initWithUID:(id)arg1;	// IMP=0x00000000000e4a02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

