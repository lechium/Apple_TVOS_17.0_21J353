//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVContentProposal, AVMediaContentRating, AVMusicAppBehaviorContext, AVPlayerItem, NSArray, NSDate, NSNumber, NSString, NSValue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemAVKitExtras : NSObject
{
    _Bool _airPlayedContent;	// 8 = 0x8
    NSArray *_navigationMarkerGroups;	// 16 = 0x10
    NSArray *_externalMetadata;	// 24 = 0x18
    NSArray *_interstitialTimeRanges;	// 32 = 0x20
    long long _interstitialPolicyEnforcement;	// 40 = 0x28
    long long _transInterstitialNavigationPolicy;	// 48 = 0x30
    long long _translatesPlayerInterstitialEvents;	// 56 = 0x38
    NSArray *_externalSubtitleOptionLanguages;	// 64 = 0x40
    NSString *_selectedExternalSubtitleOptionLanguage;	// 72 = 0x48
    AVContentProposal *_nextContentProposal;	// 80 = 0x50
    AVPlayerItem *_playerItemForScrubbing;	// 88 = 0x58
    CDUnknownBlockType _imageGeneratorForScrubbing;	// 96 = 0x60
    NSNumber *_uniqueIdentifier;	// 104 = 0x68
    NSValue *_overrideForForwardPlaybackEndTime;	// 112 = 0x70
    NSValue *_overrideForReversePlaybackEndTime;	// 120 = 0x78
    long long _avkitMediaType;	// 128 = 0x80
    NSDate *_validatedDate;	// 136 = 0x88
    AVMediaContentRating *_validatedMediaContentRating;	// 144 = 0x90
    id _playbackRestrictionsAuthorizationToken;	// 152 = 0x98
    AVMusicAppBehaviorContext *_musicBehaviorContext;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000004d387
@property(retain, nonatomic) AVMusicAppBehaviorContext *musicBehaviorContext; // @synthesize musicBehaviorContext=_musicBehaviorContext;
@property(nonatomic, getter=isAirPlayedContent) _Bool airPlayedContent; // @synthesize airPlayedContent=_airPlayedContent;
@property(retain, nonatomic) id playbackRestrictionsAuthorizationToken; // @synthesize playbackRestrictionsAuthorizationToken=_playbackRestrictionsAuthorizationToken;
@property(retain, nonatomic) AVMediaContentRating *validatedMediaContentRating; // @synthesize validatedMediaContentRating=_validatedMediaContentRating;
@property(retain, nonatomic) NSDate *validatedDate; // @synthesize validatedDate=_validatedDate;
@property(nonatomic) long long avkitMediaType; // @synthesize avkitMediaType=_avkitMediaType;
@property(retain, nonatomic) NSValue *overrideForReversePlaybackEndTime; // @synthesize overrideForReversePlaybackEndTime=_overrideForReversePlaybackEndTime;
@property(retain, nonatomic) NSValue *overrideForForwardPlaybackEndTime; // @synthesize overrideForForwardPlaybackEndTime=_overrideForForwardPlaybackEndTime;
@property(retain, nonatomic) NSNumber *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) CDUnknownBlockType imageGeneratorForScrubbing; // @synthesize imageGeneratorForScrubbing=_imageGeneratorForScrubbing;
@property(retain, nonatomic) AVPlayerItem *playerItemForScrubbing; // @synthesize playerItemForScrubbing=_playerItemForScrubbing;
@property(retain, nonatomic) AVContentProposal *nextContentProposal; // @synthesize nextContentProposal=_nextContentProposal;
@property(retain, nonatomic) NSString *selectedExternalSubtitleOptionLanguage; // @synthesize selectedExternalSubtitleOptionLanguage=_selectedExternalSubtitleOptionLanguage;
@property(retain, nonatomic) NSArray *externalSubtitleOptionLanguages; // @synthesize externalSubtitleOptionLanguages=_externalSubtitleOptionLanguages;
@property(nonatomic) long long translatesPlayerInterstitialEvents; // @synthesize translatesPlayerInterstitialEvents=_translatesPlayerInterstitialEvents;
@property(nonatomic) long long transInterstitialNavigationPolicy; // @synthesize transInterstitialNavigationPolicy=_transInterstitialNavigationPolicy;
@property(nonatomic) long long interstitialPolicyEnforcement; // @synthesize interstitialPolicyEnforcement=_interstitialPolicyEnforcement;
@property(retain, nonatomic) NSArray *interstitialTimeRanges; // @synthesize interstitialTimeRanges=_interstitialTimeRanges;
@property(retain, nonatomic) NSArray *externalMetadata; // @synthesize externalMetadata=_externalMetadata;
@property(retain, nonatomic) NSArray *navigationMarkerGroups; // @synthesize navigationMarkerGroups=_navigationMarkerGroups;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004cd75
- (id)init;	// IMP=0x000000000004cd31

@end

