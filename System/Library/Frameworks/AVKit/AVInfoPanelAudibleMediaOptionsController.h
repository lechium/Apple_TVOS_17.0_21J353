//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVDelegateManager, AVObservationController, AVPlayerController, NSArray, NSString;
@protocol AVInfoPanelMediaOptionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVInfoPanelAudibleMediaOptionsController : NSObject
{
    id <AVInfoPanelMediaOptionsControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_resolvedMediaOptionsForInfoPanel;	// 16 = 0x10
    unsigned long long _selectedMediaOptionIndexForInfoPanel;	// 24 = 0x18
    AVPlayerController *_playerController;	// 32 = 0x20
    AVDelegateManager *_delegateManager;	// 40 = 0x28
    AVObservationController *_observationController;	// 48 = 0x30
}

+ (_Bool)hasAvailableOptionsForPlayerController:(id)arg1;	// IMP=0x0010000000081fe0
- (void).cxx_destruct;	// IMP=0x0000000000081f6f
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic) AVDelegateManager *delegateManager; // @synthesize delegateManager=_delegateManager;
@property(readonly, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AVInfoPanelMediaOptionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_displayNameForMediaSelectionOption:(id)arg1;	// IMP=0x0000000000081ea5
- (void)_didObserveValueChangeAffectingSelectedMediaOption;	// IMP=0x0000000000081df7
- (void)_didObserveValueChangeAffectingResolvedMediaOptions;	// IMP=0x0000000000081d14
- (void)_stopObservation;	// IMP=0x0000000000081cd6
- (void)_startObservation;	// IMP=0x0000000000081b50
- (unsigned long long)_selectedOptionIndex;	// IMP=0x0000000000081abc
- (id)_infoPanelMediaOptions;	// IMP=0x00000000000817b5
- (void)_resetSelectedOptionIndex;	// IMP=0x00000000000817a1
- (void)_reset;	// IMP=0x0000000000081770
- (_Bool)supportsSelectedMediaOptionToggling;	// IMP=0x0000000000081768
- (void)selectMediaOption:(id)arg1;	// IMP=0x00000000000816bd
@property(readonly, nonatomic) _Bool hasUndefinedMediaOption;
@property(readonly, nonatomic) unsigned long long selectedMediaOptionIndexForInfoPanel; // @synthesize selectedMediaOptionIndexForInfoPanel=_selectedMediaOptionIndexForInfoPanel;
@property(readonly, nonatomic) NSArray *resolvedMediaOptionsForInfoPanel; // @synthesize resolvedMediaOptionsForInfoPanel=_resolvedMediaOptionsForInfoPanel;
@property(readonly, nonatomic) NSArray *audibleMediaSelectionOptions;
- (void)setNeedsUpdate;	// IMP=0x000000000008159a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000814b8
- (void)dealloc;	// IMP=0x000000000008147a
- (id)initWithPlayerController:(id)arg1 delegateManager:(id)arg2;	// IMP=0x00000000000813e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

