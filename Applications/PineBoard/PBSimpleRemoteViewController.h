//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class BSSimpleAssertion, BSWatchdog, MISSING_TYPE, NSString;
@protocol PBSimpleRemoteViewControllerDelegate;

@interface PBSimpleRemoteViewController : _UIRemoteViewController
{
    _Bool _terminated;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    MISSING_TYPE *_delegate;	// 24 = 0x18
    BSSimpleAssertion *_dismissalAssertion;	// 32 = 0x20
    BSWatchdog *_dismissalWatchdog;	// 40 = 0x28
}

+ (id)exportedInterface;	// IMP=0x00200000001a30a9
+ (id)serviceViewControllerInterface;	// IMP=0x00100000001a2e6a
- (void).cxx_destruct;	// IMP=0x00200000001a32d7
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) BSWatchdog *dismissalWatchdog; // @synthesize dismissalWatchdog=_dismissalWatchdog;
@property(readonly, nonatomic) BSSimpleAssertion *dismissalAssertion; // @synthesize dismissalAssertion=_dismissalAssertion;
@property(nonatomic) __weak id <PBSimpleRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)dealloc;	// IMP=0x00100000001a2e21
- (void)_dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 dismissalResult:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a2acb
- (void)dismissWithResult:(id)arg1;	// IMP=0x00100000001a288c
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00100000001a27d5
- (void)dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a27bc
- (void)messageViewServiceWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a26d2
- (void)prepareViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a2544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
