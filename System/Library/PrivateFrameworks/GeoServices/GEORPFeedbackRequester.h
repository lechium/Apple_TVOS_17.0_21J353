//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOServiceRequester.h"

__attribute__((visibility("hidden")))
@interface GEORPFeedbackRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;	// IMP=0x00800000002ca837
- (id)_validateResponse:(id)arg1;	// IMP=0x00000000002cab27
- (void)cancelRequest:(id)arg1;	// IMP=0x00000000002cab15
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ca99b
- (id)_requestConfigForRequest:(id)arg1;	// IMP=0x00000000002ca8bc

@end

