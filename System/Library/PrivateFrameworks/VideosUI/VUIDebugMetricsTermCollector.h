//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsTermCollector : NSObject
{
}

@property(readonly, nonatomic) NSArray *filteredTerms;
- (id)pageRenderTerms;	// IMP=0x0000000000110bec
- (id)impressionsTerms;	// IMP=0x0000000000110bdf
- (id)accountTerms;	// IMP=0x0000000000110bd2
- (id)searchTerms;	// IMP=0x0000000000110bc5
- (id)exitTerms;	// IMP=0x0000000000110bb8
- (id)enterTerms;	// IMP=0x0000000000110bab
- (id)clickTerms;	// IMP=0x0000000000110b9e
- (id)dialogTerms;	// IMP=0x0000000000110b91
- (id)pageTerms;	// IMP=0x0000000000110b84
@property(readonly, nonatomic) NSDictionary *primaryTerms;
@property(readonly, nonatomic) NSArray *metricsKitTerms;
@property(readonly, nonatomic) NSArray *baseTerms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

