//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject;
@protocol NSObject, PXAnonymousViewController;

@protocol PXPresentationEnvironment <NSObject>
@property(readonly, nonatomic) _Bool canPushViewController;
@property(readonly, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
- (void)dismissAlertWithToken:(id <NSObject>)arg1 completionHandler:(void (^)(void))arg2;
- (id <NSObject>)presentAlertWithConfigurationHandler:(void (^)(PXAlertConfiguration *))arg1;
- (_Bool)popToViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2;
- (_Bool)pushViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2;
- (void)dismissViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)presentViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
@end

