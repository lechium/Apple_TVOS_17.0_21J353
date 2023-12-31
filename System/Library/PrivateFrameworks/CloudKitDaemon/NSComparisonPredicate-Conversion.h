//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001b07f7
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001b0169
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001af8e4
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001af724
- (unsigned long long)_comparisonOptionForString:(id)arg1;	// IMP=0x00600000001af606
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001af156
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001aee8a
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001aec51
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001ae8e0
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001ae3b5
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001adf3e
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001ad86c
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;	// IMP=0x00600000001ad6d2
@end

