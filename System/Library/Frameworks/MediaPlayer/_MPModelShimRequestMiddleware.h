//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelResponse, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPModelShimRequestMiddleware : NSObject
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPModelResponse *_modelResponse;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008baec
@property(retain, nonatomic) MPModelResponse *modelResponse; // @synthesize modelResponse=_modelResponse;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)operationsForRequest:(id)arg1;	// IMP=0x000000000008b98e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

