//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HBTopShelfLabeledContentView, HBTopShelfSectionedModel, NSString;
@protocol HBTopShelfItemInteractingDelegate;

__attribute__((visibility("hidden")))
@interface HBTopShelfSectionedModelViewController : UIViewController
{
    id <HBTopShelfItemInteractingDelegate> _interactionDelegate;	// 8 = 0x8
    HBTopShelfSectionedModel *_model;	// 16 = 0x10
    HBTopShelfLabeledContentView *_labeledContentView;	// 24 = 0x18
}

+ (id)_imageFromURL:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00100000000a6a39
+ (double)_cornerRadiusForItem:(id)arg1;	// IMP=0x00100000000a6300
+ (_Bool)_itemRequiresRoundedCorners:(id)arg1;	// IMP=0x00100000000a62f8
- (void).cxx_destruct;	// IMP=0x00000000000a6c80
@property(retain, nonatomic) HBTopShelfLabeledContentView *labeledContentView; // @synthesize labeledContentView=_labeledContentView;
@property(retain, nonatomic) HBTopShelfSectionedModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <HBTopShelfItemInteractingDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)_updateCell:(id)arg1 withImageStack:(id)arg2 imageSize:(struct CGSize)arg3 normalizedSize:(struct CGSize)arg4 withItem:(id)arg5;	// IMP=0x00000000000a6644
- (void)labeledContentView:(id)arg1 didPlayItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a64b2
- (void)labeledContentView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a6320
- (id)labeledContentView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a53f6
- (id)labeledContentView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000a4d30
- (void)labeledContentView:(id)arg1 configureLabel:(id)arg2 forSection:(unsigned long long)arg3;	// IMP=0x00000000000a4bd2
- (id)labeledContentView:(id)arg1 titleForSection:(unsigned long long)arg2;	// IMP=0x00000000000a4b2b
- (struct CGSize)labeledContentView:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a49ff
- (unsigned long long)labeledContentView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x00000000000a4948
- (unsigned long long)numberOfSectionsInLabeledContentView:(id)arg1;	// IMP=0x00000000000a48da
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a4711
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a466a
- (void)loadView;	// IMP=0x00000000000a451d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

