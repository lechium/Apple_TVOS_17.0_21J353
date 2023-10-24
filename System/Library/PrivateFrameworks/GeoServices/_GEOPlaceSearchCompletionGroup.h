//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionGroup : NSObject
{
    NSString *_localizedSectionHeader;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    _Bool _shouldInterleaveClientResults;	// 24 = 0x18
    _Bool _enforceServerResultsOrder;	// 25 = 0x19
    _Bool _enableMapsSuggestServerReranking;	// 26 = 0x1a
    _Bool _isSectionForClientOnlyResults;	// 27 = 0x1b
    NSArray *_includedClientResultTypes;	// 32 = 0x20
    NSArray *_excludedClientResultTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000077a40b
@property(readonly, nonatomic) NSArray *excludedClientResultTypes; // @synthesize excludedClientResultTypes=_excludedClientResultTypes;
@property(readonly, nonatomic) NSArray *includedClientResultTypes; // @synthesize includedClientResultTypes=_includedClientResultTypes;
@property(readonly, nonatomic) _Bool isSectionForClientOnlyResults; // @synthesize isSectionForClientOnlyResults=_isSectionForClientOnlyResults;
@property(readonly, nonatomic) _Bool enableMapsSuggestServerReranking; // @synthesize enableMapsSuggestServerReranking=_enableMapsSuggestServerReranking;
@property(readonly, nonatomic) _Bool enforceServerResultsOrder; // @synthesize enforceServerResultsOrder=_enforceServerResultsOrder;
@property(readonly, nonatomic) _Bool shouldInterleaveClientResults; // @synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4 collections:(id)arg5 publishers:(id)arg6;	// IMP=0x0000000000779db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

