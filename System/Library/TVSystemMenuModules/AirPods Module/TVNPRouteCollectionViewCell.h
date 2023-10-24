//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVNPRoute;
@protocol TVNPRouteCollectionViewCellDelegate;

@interface TVNPRouteCollectionViewCell
{
    _Bool _disableFocus;	// 8 = 0x8
    TVNPRoute *_route;	// 16 = 0x10
    id <TVNPRouteCollectionViewCellDelegate> _delegate;	// 24 = 0x18
    NSString *_batteryLevelText;	// 32 = 0x20
    NSString *_nowPlayingInfoText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000036e10
@property(retain, nonatomic) NSString *nowPlayingInfoText; // @synthesize nowPlayingInfoText=_nowPlayingInfoText;
@property(retain, nonatomic) NSString *batteryLevelText; // @synthesize batteryLevelText=_batteryLevelText;
@property(nonatomic) __weak id <TVNPRouteCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableFocus; // @synthesize disableFocus=_disableFocus;
@property(retain, nonatomic) TVNPRoute *route; // @synthesize route=_route;
- (_Bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;	// IMP=0x0000000000036ae0
- (id)_batteryTextForBatteryLevel:(id)arg1;	// IMP=0x0000000000035e00
- (void)_resolveSubtitleText;	// IMP=0x0000000000035d20
- (void)_updateMultiSelectionState;	// IMP=0x0000000000035cc0
- (void)_updateVolumeState;	// IMP=0x0000000000035be0
- (void)_updateMusicBarState;	// IMP=0x0000000000035940
- (void)accessoryViewSelected;	// IMP=0x00000000000358e0
- (void)routeViewSelected;	// IMP=0x0000000000035880
- (void)volumeSliderValueChanged:(id)arg1;	// IMP=0x00000000000357d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000035330
- (_Bool)canBecomeFocused;	// IMP=0x0000000000035300
- (void)prepareForReuse;	// IMP=0x0000000000034e50
- (void)dealloc;	// IMP=0x0000000000034e00

@end
