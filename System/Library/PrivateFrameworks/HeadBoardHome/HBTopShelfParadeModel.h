//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfPromotionParadeItem, NSArray, NSString;
@protocol HBUITopShelfPromotionParadeItem;

__attribute__((visibility("hidden")))
@interface HBTopShelfParadeModel
{
    long long _style;	// 8 = 0x8
    NSArray *_hbItems;	// 16 = 0x10
    HBTopShelfPromotionParadeItem *_hbPromotionItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025e7f
@property(retain, nonatomic) HBTopShelfPromotionParadeItem *hbPromotionItem; // @synthesize hbPromotionItem=_hbPromotionItem;
@property(copy, nonatomic) NSArray *hbItems; // @synthesize hbItems=_hbItems;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_enumerateAppStoreParadeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025d34
- (id)_logSafeDescriptionBuilder;	// IMP=0x0000000000025c51
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000025b43
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) id <HBUITopShelfPromotionParadeItem> promotionItem;
- (void)_removedFromController;	// IMP=0x0000000000025af1
- (void)_addedToController;	// IMP=0x0000000000025ac3
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x00000000000258e2
- (id)initWithApplicationIdentifier:(id)arg1 topShelfCarouselContent:(id)arg2;	// IMP=0x00000000000254b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

