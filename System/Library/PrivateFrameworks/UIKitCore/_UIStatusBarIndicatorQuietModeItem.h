//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorQuietModeItem
{
    NSString *_focusName;	// 8 = 0x8
    _UIStatusBarImageView *_emphasizedImageView;	// 16 = 0x10
}

+ (id)emphasizedQuietModeIdentifier;	// IMP=0x0040000000f050fe
- (void).cxx_destruct;	// IMP=0x0000000000f056ad
@property(retain, nonatomic) _UIStatusBarImageView *emphasizedImageView; // @synthesize emphasizedImageView=_emphasizedImageView;
@property(retain, nonatomic) NSString *focusName; // @synthesize focusName=_focusName;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f05469
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000f053cb
- (id)indicatorEntryKey;	// IMP=0x0000000000f053b7
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;	// IMP=0x0000000000f05325
- (id)imageViewForIdentifier:(id)arg1;	// IMP=0x0000000000f05277
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f051c9
- (void)_create_emphasizedImageView;	// IMP=0x0000000000f0514e

@end
