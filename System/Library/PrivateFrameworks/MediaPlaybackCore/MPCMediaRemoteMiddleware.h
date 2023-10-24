//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSArray, NSDictionary, NSIndexPath, NSString;
@protocol MPCSupportedCommands;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddleware : NSObject
{
    _Bool _skippedMetadata;	// 8 = 0x8
    NSArray *_invalidationObservers;	// 16 = 0x10
    MPCFuture *_controllerFuture;	// 24 = 0x18
    MPCMediaRemoteController *_controller;	// 32 = 0x20
    MPSectionedCollection *_queueContentItems;	// 40 = 0x28
    NSDictionary *_queueParticipantItems;	// 48 = 0x30
    MPSectionedCollection *_queueModelObjects;	// 56 = 0x38
    id <MPCSupportedCommands> _supportedCommands;	// 64 = 0x40
    NSIndexPath *_playingIndexPath;	// 72 = 0x48
    NSString *_queueIdentifier;	// 80 = 0x50
    long long _playerState;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001d8c7d
@property(readonly, nonatomic) _Bool skippedMetadata; // @synthesize skippedMetadata=_skippedMetadata;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(copy, nonatomic) NSIndexPath *playingIndexPath; // @synthesize playingIndexPath=_playingIndexPath;
@property(retain, nonatomic) id <MPCSupportedCommands> supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(retain, nonatomic) MPSectionedCollection *queueModelObjects; // @synthesize queueModelObjects=_queueModelObjects;
@property(retain, nonatomic) NSDictionary *queueParticipantItems; // @synthesize queueParticipantItems=_queueParticipantItems;
@property(retain, nonatomic) MPSectionedCollection *queueContentItems; // @synthesize queueContentItems=_queueContentItems;
@property(retain, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) MPCFuture *controllerFuture; // @synthesize controllerFuture=_controllerFuture;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;	// IMP=0x00000000001d89cd
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x00000000001d8779
- (id)operationsForRequest:(id)arg1;	// IMP=0x00000000001d870c
- (id)controller:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001d8cf2
- (float)_playbackRateForContentItem:(id)arg1;	// IMP=0x00000000001dc0e9
- (id)_supportedCommands:(unsigned int)arg1 infoValueForKey:(id)arg2;	// IMP=0x00000000001dc060
- (_Bool)playerVocalsControlContinuous:(_Bool)arg1 chain:(id)arg2;	// IMP=0x00000000001dbf90
- (float)playerMaxVocalsLevel:(float)arg1 chain:(id)arg2;	// IMP=0x00000000001dbeaf
- (float)playerMinVocalsLevel:(float)arg1 chain:(id)arg2;	// IMP=0x00000000001dbdd7
- (float)playerVocalsLevel:(float)arg1 chain:(id)arg2;	// IMP=0x00000000001dbcff
- (_Bool)playerVocalsControlActive:(_Bool)arg1 chain:(id)arg2;	// IMP=0x00000000001dbc2f
- (id)audioRoute:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001dba4a
- (id)alternateAudioFormats:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001db8b6
- (unsigned long long)audioFormatPreference:(unsigned long long)arg1 chain:(id)arg2;	// IMP=0x00000000001db774
- (long long)activeAudioFormatJustification:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001db632
- (id)activeAudioFormat:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001db44d
- (id)preferredAudioFormat:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001db268
- (id)participant:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001db0bb
- (_Bool)playerIsSharedListeningSession:(_Bool)arg1 chain:(id)arg2;	// IMP=0x00000000001db004
- (_Bool)sectionIsAutoPlaySection:(_Bool)arg1 atIndex:(long long)arg2 chain:(id)arg3;	// IMP=0x00000000001daeda
- (id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001dadc2
- (long long)playerCommandDisabledReason:(long long)arg1 command:(unsigned int)arg2 chain:(id)arg3;	// IMP=0x00000000001dacd0
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;	// IMP=0x00000000001dabbd
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;	// IMP=0x00000000001daae7
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;	// IMP=0x00000000001daa26
- (id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001da881
- (id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001da6dc
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001da55b
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001da3da
- (_Bool)playerItemShouldDisableJumpToItem:(_Bool)arg1 atIndexPath:(id)arg2 boundsCheck:(_Bool)arg3 chain:(id)arg4;	// IMP=0x00000000001da1a2
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;	// IMP=0x00000000001da0d5
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;	// IMP=0x00000000001d9f39
- (_Bool)playerItemIsPlaceholder:(_Bool)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001d9d73
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001d9c12
- (id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001d9ae5
- (id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001d995a
- (CDStruct_1c9ae071)playerItemDuration:(CDStruct_1c9ae071)arg1 atIndexPath:(id)arg2 chain:(id)arg3;	// IMP=0x00000000001d962a
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;	// IMP=0x00000000001d9543
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d949e
- (long long)playerExplicitContentState:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d931d
- (long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d9257
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d90e4
- (long long)playerQueueEndAction:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d9015
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d8f3f
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d8e69
- (long long)playerState:(long long)arg1 chain:(id)arg2;	// IMP=0x00000000001d8deb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
