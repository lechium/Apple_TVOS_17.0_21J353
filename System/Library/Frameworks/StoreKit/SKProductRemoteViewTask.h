//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSExtension, NSMutableArray, NSString, SKProductPageRemoteViewController, SKRemoteProductViewController, SKStoreProductViewController, ServiceCardContainerViewController, _UIResilientRemoteViewContainerViewController;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface SKProductRemoteViewTask : NSObject
{
    _Bool _isClientEntitled;	// 8 = 0x8
    _Bool _isAskToBuy;	// 9 = 0x9
    NSString *_extensionID;	// 16 = 0x10
    _Bool _isFetchingExtension;	// 24 = 0x18
    _Bool _isPreview;	// 25 = 0x19
    _Bool _didLoad;	// 26 = 0x1a
    _Bool _visibleInClientWindow;	// 27 = 0x1b
    NSString *_logKey;	// 32 = 0x20
    NSString *_hostApplicationOverride;	// 40 = 0x28
    NSDictionary *_cachedParameters;	// 48 = 0x30
    NSDictionary *_lookupResult;	// 56 = 0x38
    NSError *_lookupError;	// 64 = 0x40
    NSExtension *_productPageExtension;	// 72 = 0x48
    id <NSCopying> _extensionRequest;	// 80 = 0x50
    NSMutableArray *_entitledConfigurationActions;	// 88 = 0x58
    NSMutableArray *_configurationActions;	// 96 = 0x60
    _UIResilientRemoteViewContainerViewController *_extensionRemoteContainerViewController;	// 104 = 0x68
    SKProductPageRemoteViewController *_extensionRemoteViewController;	// 112 = 0x70
    ServiceCardContainerViewController *_extensionRemoteCardContainerViewController;	// 120 = 0x78
    SKRemoteProductViewController *_uiServiceRemoteViewController;	// 128 = 0x80
    SKStoreProductViewController *_storeController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000383f2
- (void)finishImmediately;	// IMP=0x0000000000038372
- (void)setAskToBuy:(_Bool)arg1;	// IMP=0x00000000000381b7
- (void)setUsageContext:(id)arg1;	// IMP=0x000000000003800e
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x0000000000037e65
- (void)setShowsStoreButton:(id)arg1;	// IMP=0x0000000000037ca5
- (void)setProductPageStyle:(id)arg1;	// IMP=0x0000000000037afc
- (void)setPromptString:(id)arg1;	// IMP=0x0000000000037953
- (void)setShowsRightBarButton:(_Bool)arg1;	// IMP=0x000000000003779a
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x00000000000375f1
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x0000000000037448
- (id)_hostApplicationIdentifier;	// IMP=0x00000000000373d9
- (void)setHostBundleIdentifier:(id)arg1;	// IMP=0x00000000000373c8
- (void)setClientIdentifier:(id)arg1;	// IMP=0x000000000003721f
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x0000000000037076
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x0000000000036ecd
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003691c
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003688d
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000367fe
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000367e7
- (void)productPageRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x0000000000036740
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;	// IMP=0x0000000000036629
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036539
- (void)_finishWithResult:(long long)arg1;	// IMP=0x0000000000036377
- (id)_productIDFromParameters:(id)arg1;	// IMP=0x0000000000036219
- (id)_keyProfileForProductLookup;	// IMP=0x00000000000361fd
- (void)_killExtensionIfNecessary;	// IMP=0x000000000003613a
- (void)_showExtensionFromUIService;	// IMP=0x0000000000035f43
- (void)_didReceiveExtensionRemoteViewController:(id)arg1;	// IMP=0x0000000000035c1a
- (void)_showExtensionWithID:(id)arg1;	// IMP=0x00000000000356ca
- (void)_addChildController:(id)arg1 toController:(id)arg2;	// IMP=0x0000000000035548
- (void)_loadUIServiceIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034ff9
- (void)_showErrorController;	// IMP=0x0000000000034f36
- (_Bool)_isProductUnavailableError:(id)arg1;	// IMP=0x0000000000034ea0
- (_Bool)_isViewControllerDescendant:(id)arg1 ofViewController:(id)arg2;	// IMP=0x0000000000034de9
- (void)_showExtensionIfNeeded;	// IMP=0x0000000000034c8b
- (void)_executeConfigurationActionsForExtension:(id)arg1;	// IMP=0x0000000000034a12
- (void)_executeConfigurationActionsForUIService:(id)arg1;	// IMP=0x00000000000347b7
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1 needsEntitlement:(_Bool)arg2;	// IMP=0x0000000000034547
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x0000000000034435
- (void)setPreview:(id)arg1;	// IMP=0x0000000000034268
- (void)setPresentationStyle:(id)arg1;	// IMP=0x00000000000341b5
- (void)storeProductViewControllerDidAppear;	// IMP=0x00000000000341a3
- (void)storeProductViewControllerWillAppear;	// IMP=0x0000000000034191
- (void)lookupProductWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033cc9
- (void)dealloc;	// IMP=0x0000000000033beb
- (id)initWithStoreController:(id)arg1;	// IMP=0x00000000000339cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

