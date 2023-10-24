//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;	// IMP=0x00800000000e7df0
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;	// IMP=0x00000000000e81e0
- (void)webViewDidDrawTiles:(id)arg1;	// IMP=0x00000000000e81d0
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;	// IMP=0x00000000000e81c0
- (long long)getPasteboardChangeCount;	// IMP=0x00000000000e81b0
- (_Bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(_Bool)arg3;	// IMP=0x00000000000e81a0
- (_Bool)performsTwoStepPaste:(id)arg1;	// IMP=0x00000000000e8190
- (_Bool)hasRichlyEditableSelection;	// IMP=0x00000000000e8180
- (_Bool)shouldSuppressPasswordEcho;	// IMP=0x00000000000e8170
- (int)deviceOrientation;	// IMP=0x00000000000e8160
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x00000000000e8150
- (_Bool)shouldRevealCurrentSelectionAfterInsertion;	// IMP=0x00000000000e8140
- (struct CGPoint)interactionLocation;	// IMP=0x00000000000e8120
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000e8110
- (long long)getPasteboardItemsCount;	// IMP=0x00000000000e8100
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000e80f0
- (void)writeDataToPasteboard:(id)arg1;	// IMP=0x00000000000e80e0
- (id)checkSpellingOfString:(id)arg1;	// IMP=0x00000000000e80d0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;	// IMP=0x00000000000e80b0
- (void)webViewDidEndOverflowScroll:(id)arg1;	// IMP=0x00000000000e80a0
- (void)webViewDidStartOverflowScroll:(id)arg1;	// IMP=0x00000000000e8090
- (void)webViewDidLayout:(id)arg1;	// IMP=0x00000000000e8080
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;	// IMP=0x00000000000e8070
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;	// IMP=0x00000000000e8060
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;	// IMP=0x00000000000e8050
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;	// IMP=0x00000000000e8040
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;	// IMP=0x00000000000e8030
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000e8020
- (void)deleteFromInput;	// IMP=0x00000000000e8010
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000e8000
- (_Bool)handleKeyAppCommandForCurrentEvent;	// IMP=0x00000000000e7ff0
- (_Bool)handleKeyTextCommandForCurrentEvent;	// IMP=0x00000000000e7fe0
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000e7fd0
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000e7fc0
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000e7fb0
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;	// IMP=0x00000000000e7fa0
- (void)webViewDidReceiveMobileDocType:(id)arg1;	// IMP=0x00000000000e7f90
- (void)webViewDidRestoreFromPageCache:(id)arg1;	// IMP=0x00000000000e7f80
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;	// IMP=0x00000000000e7f70
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;	// IMP=0x00000000000e7f60
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;	// IMP=0x00000000000e7f50
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000000e7f40
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000000e7f30
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e7f20
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x00000000000e7f10
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;	// IMP=0x00000000000e7f00
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e7ef0
- (void)webViewDidPreventDefaultForEvent:(id)arg1;	// IMP=0x00000000000e7ee0
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e7ed0
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e7ec0
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;	// IMP=0x00000000000e7eb0
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;	// IMP=0x00000000000e7ea0
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e7e90
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000e7e80
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000e7e70
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000e7e60
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;	// IMP=0x00000000000e7e40
- (struct CGPoint)contentsPointForWebView:(id)arg1;	// IMP=0x00000000000e7e20

@end
