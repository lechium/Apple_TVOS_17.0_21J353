//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, WAKView, WebDataSource;

__attribute__((visibility("hidden")))
@interface WebPluginController : NSObject
{
    WAKView *_documentView;	// 8 = 0x8
    WebDataSource *_dataSource;	// 16 = 0x10
    NSMutableArray *_views;	// 24 = 0x18
    _Bool _started;	// 32 = 0x20
    NSMutableSet *_checksInProgress;	// 40 = 0x28
}

+ (_Bool)isPlugInView:(id)arg1;	// IMP=0x001000000009ff80
+ (void)addPlugInView:(id)arg1;	// IMP=0x001000000009ff00
- (void)pluginViewFinishedLoading:(id)arg1;	// IMP=0x00000000000a1350
- (void)pluginView:(id)arg1 receivedError:(id)arg2;	// IMP=0x00000000000a1300
- (void)pluginView:(id)arg1 receivedData:(id)arg2;	// IMP=0x00000000000a12b0
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;	// IMP=0x00000000000a1030
- (id)URLPolicyCheckReferrer;	// IMP=0x00000000000a0fe0
- (id)webView;	// IMP=0x00000000000a0fb0
- (id)webFrame;	// IMP=0x00000000000a0f90
- (void)showStatus:(id)arg1;	// IMP=0x00000000000a0f70
- (void)webPlugInContainerShowStatus:(id)arg1;	// IMP=0x00000000000a0f10
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;	// IMP=0x00000000000a0eb0
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;	// IMP=0x00000000000a0e50
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000a0b50
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;	// IMP=0x00000000000a0af0
- (_Bool)processingUserGesture;	// IMP=0x00000000000a0ae0
- (void)destroyAllPlugins;	// IMP=0x00000000000a09d0
- (void)_cancelOutstandingChecks;	// IMP=0x00000000000a0970
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;	// IMP=0x00000000000a0920
- (void)destroyPlugin:(id)arg1;	// IMP=0x00000000000a0870
- (void)addPlugin:(id)arg1;	// IMP=0x00000000000a0670
- (void)restorePluginsFromCache;	// IMP=0x00000000000a05c0
- (void)stopPluginsForPageCache;	// IMP=0x00000000000a0530
- (void)stopAllPlugins;	// IMP=0x00000000000a04a0
- (void)startAllPlugins;	// IMP=0x00000000000a0350
- (void)destroyOnePlugin:(id)arg1;	// IMP=0x00000000000a0290
- (void)stopOnePluginForPageCache:(id)arg1;	// IMP=0x00000000000a01f0
- (void)stopOnePlugin:(id)arg1;	// IMP=0x00000000000a0130
- (id)superlayerForPluginView:(id)arg1;	// IMP=0x00000000000a00d0
- (_Bool)plugInsAreRunning;	// IMP=0x00000000000a00a0
- (void)dealloc;	// IMP=0x00000000000a0050
- (void)setDataSource:(id)arg1;	// IMP=0x00000000000a0040
- (id)initWithDocumentView:(id)arg1;	// IMP=0x000000000009ffd0
- (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;	// IMP=0x000000000009fef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
