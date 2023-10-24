//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioSession, NSIndexSet, NSSet, NSUndoManager, PXAssetReference, PXCoordinatedRect, PXStoryViewModeTransition;
@protocol PXDisplayAsset, PXDisplayAssetCollection, PXStoryDiagnosticHUDContentProvider, PXStorySongResource, PXStoryVideoPresentationController;

@protocol PXStoryMutableModel
@property(nonatomic) double infoPanelVisibilityFraction;
@property(nonatomic) double desiredInfoPanelVisibilityFraction;
@property(nonatomic) float volumeDuringViewControllerTransition;
@property(nonatomic) double volume;
@property(nonatomic) long long diagnosticHUDType;
@property(nonatomic) _Bool isHUDVisible;
@property(nonatomic) _Bool inLiveResize;
@property(nonatomic) CDStruct_198678f7 elapsedTime;
@property(retain, nonatomic) id <PXStorySongResource> activeSongResource;
@property(retain, nonatomic) id <PXStorySongResource> editorPreviewSong;
@property(retain, nonatomic) AVAudioSession *audioSession;
@property(retain, nonatomic) NSUndoManager *undoManager;
@property(nonatomic) _Bool currentAssetCollectionIsFavorite;
@property(nonatomic) long long musicReadinessStatus;
@property(nonatomic) long long contentReadinessStatus;
@property(nonatomic) long long readinessStatus;
@property(retain, nonatomic) PXAssetReference *lastHitAssetReference;
@property(nonatomic) long long lastHitClipIdentifier;
@property(copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers;
@property(nonatomic) _Bool isPerformingViewControllerTransition;
@property(nonatomic) _Bool isPresentingColorGradeEditor;
@property(nonatomic) _Bool isPresentingMusicEditor;
@property(nonatomic) _Bool isPresentingAssetPicker;
@property(nonatomic) _Bool isHovering;
@property(nonatomic) _Bool isTouching;
@property(nonatomic) _Bool allowsScrolling;
@property(nonatomic) _Bool isScrolling;
@property(nonatomic) struct CGPoint currentGridScrollPosition;
@property(nonatomic) _Bool isActuallyPlaying;
@property(nonatomic) long long desiredPlayState;
@property(nonatomic) long long titleAlignment;
@property(retain, nonatomic) PXCoordinatedRect *presentedSubtitleFrame;
@property(retain, nonatomic) PXCoordinatedRect *presentedTitleFrame;
@property(nonatomic) double titleOpacity;
@property(nonatomic) double chromeVisibilityFraction;
@property(nonatomic) _Bool prefersExportLayoutMatchesPlayback;
@property(nonatomic) double styleSwitcherVisibilityFraction;
@property(retain, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property(nonatomic) _Bool shouldAspectFitCurrentSegment;
@property(nonatomic) CDStruct_3c1748cc thumbnailAutoplayTimeRange;
@property(nonatomic) _Bool shouldAutoplayThumbnail;
@property(nonatomic) long long thumbnailStyle;
@property(nonatomic) long long detailsViewButtonDisplayStyle;
@property(nonatomic) long long viewMode;
- (void)removeVideoPresentationController:(id <PXStoryVideoPresentationController>)arg1;
- (void)addVideoPresentationController:(id <PXStoryVideoPresentationController>)arg1;
- (void)endMusicDuckingWithToken:(id)arg1;
- (id)beginMusicDucking;
- (void)changeOverallDuration:(long long)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeAssetsFromCuration:(NSSet *)arg1;
- (void)makeAssetKeyPhoto:(id <PXDisplayAsset>)arg1;
- (void)makeCurrentAssetKeyPhoto;
- (void)setDiagnosticHUDContentProvider:(id <PXStoryDiagnosticHUDContentProvider>)arg1 forType:(long long)arg2;
- (void)restartPlaybackFromBeginning;
- (void)flickedPastEnd;
- (_Bool)rewindToBeginningOfCurrentSegment;
- (_Bool)skipToBeginningOfSegmentWithIdentifier:(long long)arg1;
- (_Bool)skipToSegmentWithOffset:(long long)arg1;
- (_Bool)setCurrentSegmentIdentifier:(long long)arg1 timeIntoSegment:(CDStruct_198678f7)arg2 timeLeftInSegment:(CDStruct_198678f7)arg3 changeSource:(unsigned long long)arg4;
- (void)didEndPresentingAlert;
- (void)didStartPresentingAlert;
- (void)scrollToPosition:(CDStruct_48d5200d)arg1;
- (void)reconfigureWithAssetCollection:(id <PXDisplayAssetCollection>)arg1;
@end

