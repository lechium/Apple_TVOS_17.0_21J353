//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, AVUnifiedPlayerAudioMenuProvider, AVUnifiedPlayerCustomOverlayMenuProvider, AVUnifiedPlayerMediaOptionMenuProvider, AVUnifiedPlayerObservingMenuProvider, AVUnifiedPlayerPictureInPictureMenuProvider, AVUnifiedPlayerPlaybackSpeedMenuProvider, NSArray, NSHashTable, NSMapTable, NSString, UIMenuElement;
@protocol AVInfoPanelMediaOptionsController, AVUnifiedPlayerToolbarMenuDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerToolbarMenuController : NSObject
{
    _Bool _showingVideoContent;	// 8 = 0x8
    NSArray *_combinedMenuElements;	// 16 = 0x10
    NSArray *_toolbarControlItems;	// 24 = 0x18
    id <AVUnifiedPlayerToolbarMenuDelegate> _delegate;	// 32 = 0x20
    AVPlayerViewController *_playerViewController;	// 40 = 0x28
    UIMenuElement *_customAudioMenu;	// 48 = 0x30
    id <AVInfoPanelMediaOptionsController> _audibleMediaOptionsController;	// 56 = 0x38
    id <AVInfoPanelMediaOptionsController> _legibleMediaOptionsController;	// 64 = 0x40
    long long _bestAvailableAudioFormat;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_prepareSource;	// 80 = 0x50
    NSArray *_providers;	// 88 = 0x58
    AVUnifiedPlayerCustomOverlayMenuProvider *_customOverlayMenuProvider;	// 96 = 0x60
    AVUnifiedPlayerObservingMenuProvider *_customMenuProvider;	// 104 = 0x68
    AVUnifiedPlayerPlaybackSpeedMenuProvider *_playbackSpeedMenuProvider;	// 112 = 0x70
    AVUnifiedPlayerMediaOptionMenuProvider *_legibleLanguageMenuProvider;	// 120 = 0x78
    AVUnifiedPlayerPictureInPictureMenuProvider *_pictureInPictureMenuProvider;	// 128 = 0x80
    AVUnifiedPlayerAudioMenuProvider *_audioMenuProvider;	// 136 = 0x88
    NSHashTable *_contextMenuConduits;	// 144 = 0x90
    unsigned long long _controlItemGenerationTag;	// 152 = 0x98
    NSMapTable *_elementToControlItemMap;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000000972a
@property(readonly, nonatomic) NSMapTable *elementToControlItemMap; // @synthesize elementToControlItemMap=_elementToControlItemMap;
@property(readonly, nonatomic) unsigned long long controlItemGenerationTag; // @synthesize controlItemGenerationTag=_controlItemGenerationTag;
@property(readonly, nonatomic) NSHashTable *contextMenuConduits; // @synthesize contextMenuConduits=_contextMenuConduits;
@property(readonly, nonatomic) AVUnifiedPlayerAudioMenuProvider *audioMenuProvider; // @synthesize audioMenuProvider=_audioMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerPictureInPictureMenuProvider *pictureInPictureMenuProvider; // @synthesize pictureInPictureMenuProvider=_pictureInPictureMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMediaOptionMenuProvider *legibleLanguageMenuProvider; // @synthesize legibleLanguageMenuProvider=_legibleLanguageMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerPlaybackSpeedMenuProvider *playbackSpeedMenuProvider; // @synthesize playbackSpeedMenuProvider=_playbackSpeedMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerObservingMenuProvider *customMenuProvider; // @synthesize customMenuProvider=_customMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerCustomOverlayMenuProvider *customOverlayMenuProvider; // @synthesize customOverlayMenuProvider=_customOverlayMenuProvider;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *prepareSource; // @synthesize prepareSource=_prepareSource;
@property(nonatomic, getter=isShowingVideoContent) _Bool showingVideoContent; // @synthesize showingVideoContent=_showingVideoContent;
@property(nonatomic) long long bestAvailableAudioFormat; // @synthesize bestAvailableAudioFormat=_bestAvailableAudioFormat;
@property(retain, nonatomic) id <AVInfoPanelMediaOptionsController> legibleMediaOptionsController; // @synthesize legibleMediaOptionsController=_legibleMediaOptionsController;
@property(retain, nonatomic) id <AVInfoPanelMediaOptionsController> audibleMediaOptionsController; // @synthesize audibleMediaOptionsController=_audibleMediaOptionsController;
@property(retain, nonatomic) UIMenuElement *customAudioMenu; // @synthesize customAudioMenu=_customAudioMenu;
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <AVUnifiedPlayerToolbarMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_firstConduitWithMenuIdentifier:(id)arg1;	// IMP=0x0000000000009458
- (void)_didUpdateBestAvailableAudioFormat;	// IMP=0x0000000000009409
- (void)_didAddContextMenuConduit:(id)arg1;	// IMP=0x000000000000936e
- (id)_findMenuAdjacentToMenuElement:(id)arg1 withSearchStepSize:(long long)arg2;	// IMP=0x0000000000009105
- (id)_controlItemsForMenuElements:(id)arg1 withGenerationTag:(unsigned long long)arg2 elementMapping:(id)arg3 atDepth:(unsigned long long)arg4;	// IMP=0x0000000000008f47
- (id)_controlItemsForMenuElements:(id)arg1 withGenerationTag:(unsigned long long)arg2 elementMapping:(id)arg3;	// IMP=0x0000000000008f32
- (id)_controlItemForMenu:(id)arg1 withGenerationTag:(unsigned long long)arg2;	// IMP=0x0000000000008bbd
- (id)_controlItemForAction:(id)arg1 withGenerationTag:(unsigned long long)arg2;	// IMP=0x000000000000893d
- (void)_handleControlItemSecondaryCallbackForMenu:(id)arg1 withSender:(id)arg2 andGenerationTag:(unsigned long long)arg3;	// IMP=0x00000000000088c0
- (void)_handleControlItemCallbackForMenu:(id)arg1 withSender:(id)arg2 andGenerationTag:(unsigned long long)arg3;	// IMP=0x000000000000882c
- (void)_handleControlItemCallbackForAction:(id)arg1 withSender:(id)arg2 andGenerationTag:(unsigned long long)arg3;	// IMP=0x000000000000876b
- (id)_pictureInPictureController;	// IMP=0x0000000000008640
- (void)_updatePlaybackSpeeds;	// IMP=0x000000000000856e
- (void)_updatePiPAvailability;	// IMP=0x00000000000082f7
- (id)_nowPlayingPlayerViewController;	// IMP=0x000000000000826c
- (id)_combinedProviderMenuElements;	// IMP=0x0000000000008078
- (void)_setupProviders;	// IMP=0x0000000000007b61
- (void)_setNeedsPrepareForDisplay;	// IMP=0x0000000000007b4e
- (void)mediaOptionsControllerDidUpdateSelectedMediaOptionIndex:(id)arg1;	// IMP=0x0000000000007977
- (void)mediaOptionsControllerDidUpdateResolvedMediaOptions:(id)arg1;	// IMP=0x0000000000007957
- (void)observingMenuProviderDidUpdateMenuElements:(id)arg1;	// IMP=0x000000000000793d
- (void)customOverlayMenuDidSelectAction:(id)arg1;	// IMP=0x0000000000007900
- (_Bool)customOverlayIsEnabled:(id)arg1;	// IMP=0x000000000000789d
- (void)pictureInPictureMenuDidSelectStartAction:(id)arg1;	// IMP=0x00000000000076ec
- (id)findMenuAdjacentToPiPMenuWithSearchStepSize:(long long)arg1;	// IMP=0x0000000000007681
- (id)findMenuAdjacentToMenu:(id)arg1 withSearchStepSize:(long long)arg2;	// IMP=0x000000000000766f
- (void)removeContextMenuConduit:(id)arg1;	// IMP=0x0000000000007656
- (void)addContextMenuConduit:(id)arg1;	// IMP=0x00000000000075f1
- (void)prepareForDisplay;	// IMP=0x0000000000007452
@property(readonly, nonatomic) NSArray *toolbarControlItems; // @synthesize toolbarControlItems=_toolbarControlItems;
@property(readonly, nonatomic) NSArray *combinedMenuElements; // @synthesize combinedMenuElements=_combinedMenuElements;
@property(copy, nonatomic) NSArray *userMenuElements;
- (void)dealloc;	// IMP=0x0000000000007098
- (id)init;	// IMP=0x0000000000006f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

