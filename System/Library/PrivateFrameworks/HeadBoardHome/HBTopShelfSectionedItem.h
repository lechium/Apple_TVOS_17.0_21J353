//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HBTopShelfSectionedItem
{
    long long _placeholderAssetType;	// 8 = 0x8
}

+ (id)_logStringForImageShape:(unsigned long long)arg1;	// IMP=0x0060000000024d54
@property(readonly, nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
- (id)_topShelfSectionedItem;	// IMP=0x0000000000024d42
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000024bdc
@property(readonly, nonatomic) NSURL *topRightImageURL;
@property(readonly, nonatomic) NSString *playbackSubtitle;
@property(readonly, nonatomic) NSString *playbackTitle;
@property(readonly, nonatomic) _Bool alwaysShowTitle;
@property(readonly, nonatomic) NSNumber *playbackProgress;
@property(readonly, nonatomic) unsigned long long imageScaleMode;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) unsigned long long imageShape;
- (id)initWithTopShelfSectionedItem:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x00000000000248a1

@end

