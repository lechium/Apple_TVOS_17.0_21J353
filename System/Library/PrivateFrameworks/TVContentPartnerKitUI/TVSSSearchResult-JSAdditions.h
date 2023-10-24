//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSearchServices/TVSSSearchResult.h>

@class NSArray, NSString, NSURL, TVSSSearchResultBatch;

@interface TVSSSearchResult (JSAdditions)

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) TVSSSearchResultBatch *initialBatch;
@property(readonly, copy, nonatomic) NSURL *queryURL;
@property(readonly, copy, nonatomic) NSArray *relatedContentQueries;
@property(readonly, nonatomic) _Bool showBrowseResults;
@property(readonly, copy, nonatomic) NSString *title;
@end

