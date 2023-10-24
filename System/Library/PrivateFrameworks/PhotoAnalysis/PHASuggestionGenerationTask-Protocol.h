//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PHATask-Protocol.h>

@class MAProgressReporter, NSDictionary, PGManager;

@protocol PHASuggestionGenerationTask <PHATask>
@property(retain, nonatomic) NSDictionary *suggestionOptionsDictionary;
- (NSDictionary *)generateSuggestionsWithGraphManager:(PGManager *)arg1 progressReporter:(MAProgressReporter *)arg2 error:(id *)arg3;
@end
