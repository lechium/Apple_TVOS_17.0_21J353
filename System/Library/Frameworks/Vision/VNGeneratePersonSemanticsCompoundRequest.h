//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNGeneratePersonSemanticsCompoundRequest
{
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000294f79
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000294917
+ (long long)compoundRequestRevisionForRequest:(id)arg1;	// IMP=0x00600000002947bb
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00600000002956ab
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000293ff9
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000293f95
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x000000000029323e
- (id)initWithOriginalRequests:(id)arg1;	// IMP=0x00000000002930b4

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end
