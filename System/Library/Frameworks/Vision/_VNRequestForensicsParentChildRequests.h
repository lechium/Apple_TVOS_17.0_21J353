//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsParentChildRequests : NSObject
{
    VNRequest *_parentRequest;	// 8 = 0x8
    NSArray *_orderedChildRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003ad6e
@property(readonly, copy, nonatomic) NSArray *orderedChildRequests; // @synthesize orderedChildRequests=_orderedChildRequests;
@property(readonly, nonatomic) VNRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003aaf8
- (unsigned long long)hash;	// IMP=0x000000000003aa67
- (id)description;	// IMP=0x000000000003a9a6
- (id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2;	// IMP=0x000000000003a8ec

@end

