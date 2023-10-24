//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSXPCInterface, PBSBulletin;
@protocol NSSecureCoding;

@protocol PBSBulletinPresenter <NSObject>
+ (NSXPCInterface *)_exportedInterface;
- (void)handleMenuButtonWithCompletion:(void (^)(_Bool))arg1;
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (void)bulletinServiceUpdateWithBulletin:(PBSBulletin *)arg1;
- (void)bulletinServiceBeginPresentationWithBulletin:(PBSBulletin *)arg1;

@optional
+ (NSXPCInterface *)_remoteViewControllerInterface;
- (void)bulletinServiceWillPresentBulletin:(id <NSSecureCoding>)arg1;
- (void)bulletinServiceToggleSize;
- (void)bulletinServiceEndUserInteractionWithCompletion:(void (^)(_Bool))arg1;
- (void)bulletinServiceBeginUserInteraction;
@end

