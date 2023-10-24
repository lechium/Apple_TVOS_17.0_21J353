//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSString, SiriSharedUIContentLabel, UIImage, UIImageView;

@interface SRGuideViewCell : SiriUIContentCollectionViewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    SiriSharedUIContentLabel *_nameLabel;	// 16 = 0x10
    SiriSharedUIContentLabel *_tagPhraseLabel;	// 24 = 0x18
    _Bool _hasCreatedConstraints;	// 32 = 0x20
    UIImage *_iconImage;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_tagPhrase;	// 56 = 0x38
    NSString *_aceId;	// 64 = 0x40
}

+ (_Bool)chevronBlendEffectEnabled;	// IMP=0x00400000000145f5
+ (struct UIEdgeInsets)defaultInsets;	// IMP=0x0010000000014590
+ (double)heightOfCellWithName:(id)arg1 tagPhrase:(id)arg2 width:(double)arg3;	// IMP=0x0010000000014151
+ (_Bool)placesImageAboveText;	// IMP=0x0010000000013961
+ (_Bool)_allowsTextToWrap;	// IMP=0x00100000000138f1
+ (id)_tagPhraseLabelFont;	// IMP=0x00100000000138d8
+ (id)_nameLabelFont;	// IMP=0x00100000000138bf
- (void).cxx_destruct;	// IMP=0x00200000000146e7
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property(copy, nonatomic) NSString *tagPhrase; // @synthesize tagPhrase=_tagPhrase;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)updateConstraints;	// IMP=0x00100000000139d1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001358d

@end
