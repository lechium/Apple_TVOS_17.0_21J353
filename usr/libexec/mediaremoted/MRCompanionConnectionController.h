//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, NSDate, NSError, NSString;
@protocol MRCompanionConnectionControllerDelegate;

@interface MRCompanionConnectionController : NSObject
{
    MRAVEndpoint *_companionEndpoint;	// 8 = 0x8
    _Bool _isDiscovering;	// 16 = 0x10
    _Bool _isConnecting;	// 17 = 0x11
    NSString *_lastConnectionAttemptReason;	// 24 = 0x18
    NSDate *_lastConnectionAttemptDate;	// 32 = 0x20
    NSError *_lastConnectionAttemptError;	// 40 = 0x28
    id <MRCompanionConnectionControllerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000d7008
@property(nonatomic) id <MRCompanionConnectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRAVEndpoint *companionEndpoint; // @synthesize companionEndpoint=_companionEndpoint;
- (id)debugDescription;	// IMP=0x00100000000d6de2
- (void)_maybeAttemptToDiscoverAndConnectToCompanionWithReason:(id)arg1;	// IMP=0x00100000000d6720
- (_Bool)_shouldAttemptToDiscoverAndConnectToCompanion;	// IMP=0x00100000000d661b
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00100000000d641d
- (void)_handleCompanionDeviceConnectedNotification:(id)arg1;	// IMP=0x00100000000d6404
- (id)init;	// IMP=0x00100000000d5e85

@end

