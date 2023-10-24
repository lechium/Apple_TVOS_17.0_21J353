//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SFAirDropViewServiceHostProtocol;

__attribute__((visibility("hidden")))
@interface _SFAirDropRemoteViewController : _UIRemoteViewController
{
    id <SFAirDropViewServiceHostProtocol> _airDropHost;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000002b681
+ (id)serviceViewControllerInterface;	// IMP=0x001000000002b661
- (void).cxx_destruct;	// IMP=0x000000000002b901
@property(nonatomic) __weak id <SFAirDropViewServiceHostProtocol> airDropHost; // @synthesize airDropHost=_airDropHost;
- (void)airDropViewServiceDidRequestDismissal;	// IMP=0x000000000002b897
- (void)airDropViewServiceRequestingSendingAppBundleIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b82e
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b7a3
- (void)airDropViewServiceDidFinishTransferWithSuccess:(_Bool)arg1;	// IMP=0x000000000002b759
- (void)airDropViewServiceDidStartTransfer;	// IMP=0x000000000002b71c
- (void)airDropViewServiceWillStartTransferToRecipient:(id)arg1;	// IMP=0x000000000002b6b3
- (id)airDropExtensionService;	// IMP=0x000000000002b6a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
