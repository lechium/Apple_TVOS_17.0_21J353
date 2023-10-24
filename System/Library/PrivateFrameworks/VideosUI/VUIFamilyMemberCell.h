//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVContainerCollectionViewCell.h>

@class NSString, TVImageLayout, VUIFamilyMember, VUILabel, _TVImageView, _TVMonogramView, _TVStackingPosterView;

__attribute__((visibility("hidden")))
@interface VUIFamilyMemberCell : TVContainerCollectionViewCell
{
    VUIFamilyMember *_familyMember;	// 8 = 0x8
    VUILabel *_nameLabel;	// 16 = 0x10
    TVImageLayout *_monogramImageLayout;	// 24 = 0x18
    _TVMonogramView *_monogramView;	// 32 = 0x20
    _TVImageView *_familyMemberImageView;	// 40 = 0x28
    _TVStackingPosterView *_stackingPosterView;	// 48 = 0x30
}

+ (id)_monogramViewForFamilyMemberCell:(id)arg1;	// IMP=0x00100000001c3ac0
+ (double)maxMonogramHeight;	// IMP=0x00100000001c3a74
+ (void)configureVUIFamilyMemberCell:(id)arg1 withFamilyMember:(id)arg2 metricsOnly:(_Bool)arg3;	// IMP=0x00100000001c29da
- (void).cxx_destruct;	// IMP=0x00000000001c414e
@property(retain, nonatomic) _TVStackingPosterView *stackingPosterView; // @synthesize stackingPosterView=_stackingPosterView;
@property(retain, nonatomic) _TVImageView *familyMemberImageView; // @synthesize familyMemberImageView=_familyMemberImageView;
@property(retain, nonatomic) _TVMonogramView *monogramView; // @synthesize monogramView=_monogramView;
@property(retain, nonatomic) TVImageLayout *monogramImageLayout; // @synthesize monogramImageLayout=_monogramImageLayout;
@property(retain, nonatomic) VUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)selectingView;	// IMP=0x00000000001c40ab
- (struct CGSize)_tvOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001c3f0a
- (void)configureMonogramImageLayoutForWindowWidth:(double)arg1;	// IMP=0x00000000001c3e8b
@property(readonly, nonatomic) struct CGSize monogramSize;
- (void)familyMember:(id)arg1 photoRequestDidCompleteWithImage:(id)arg2;	// IMP=0x00000000001c3626
- (void)layoutSubviews;	// IMP=0x00000000001c35bd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001c35a6
- (void)prepareForReuse;	// IMP=0x00000000001c3158
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001c3067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
