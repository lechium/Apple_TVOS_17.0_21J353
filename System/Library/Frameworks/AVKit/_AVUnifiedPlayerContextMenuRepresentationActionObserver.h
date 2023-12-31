//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIAction;
@protocol _AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerContextMenuRepresentationActionObserver : NSObject
{
    UIAction *_action;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    id <_AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate> _delegate;	// 24 = 0x18
}

+ (id)observeAction:(id)arg1 atIndexPath:(id)arg2 withDelegate:(id)arg3;	// IMP=0x001000000012cadb
+ (id)_keyPathsToObserve;	// IMP=0x001000000012caab
- (void).cxx_destruct;	// IMP=0x000000000012ca7a
@property(readonly, nonatomic) __weak id <_AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) UIAction *action; // @synthesize action=_action;
- (void)_stopObserving:(id)arg1;	// IMP=0x000000000012c8e3
- (void)_startObserving:(id)arg1;	// IMP=0x000000000012c76c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000012c72e
- (void)invalidate;	// IMP=0x000000000012c6ca
- (void)dealloc;	// IMP=0x000000000012c68c
- (id)initWithAction:(id)arg1 indexPath:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000012c5c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

