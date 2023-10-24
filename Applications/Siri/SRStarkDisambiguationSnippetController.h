//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSMutableDictionary, NSString, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDataSource, SRStarkItemControllerDelegate;

@interface SRStarkDisambiguationSnippetController
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    id <SRStarkItemControllerDelegate> _delegate;	// 40 = 0x28
    id <SRStarkDisambiguationSnippetControllerDataSource> _dataSource;	// 48 = 0x30
    AceObject *_aceObject;	// 56 = 0x38
    NSString *_disambiguationKey;	// 64 = 0x40
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000d7bb
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(readonly, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toggleFullScreen:(_Bool)arg1;	// IMP=0x001000000000d6a9
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x001000000000d545
- (_Bool)isRightHandDrive;	// IMP=0x001000000000d4f4
- (void)didPressShowMore;	// IMP=0x001000000000d2ea
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x001000000000d058
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x001000000000d00d
- (Class)showMoreCellClass;	// IMP=0x001000000000cffc
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x001000000000cc7f
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x001000000000cc34
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x001000000000cc27
- (id)tableCellIdentifiersAndClasses;	// IMP=0x001000000000cba7
- (void)siriRequestWillStart;	// IMP=0x001000000000cb6e
- (long long)autoDismissalReason;	// IMP=0x001000000000cb63
- (long long)autoDismissalStrategy;	// IMP=0x001000000000cb58
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000000cb0c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000ca90
- (void)autodisambiguate;	// IMP=0x001000000000ca61
- (_Bool)shouldAutodisambiguate;	// IMP=0x001000000000ca4c
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000000c19e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end
