//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class UISearchController;
@protocol UISearchSuggestion;

@protocol UISearchResultsUpdating <NSObject>
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1;

@optional
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1 selectingSearchSuggestion:(id <UISearchSuggestion>)arg2;
@end

