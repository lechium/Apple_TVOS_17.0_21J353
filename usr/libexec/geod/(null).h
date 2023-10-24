//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet;

@interface (null) : NSObject
{
    CDUnknownBlockType _requestHandler;	// 8 = 0x8
    NSDictionary *_identifierOrderMap;	// 16 = 0x10
    NSMutableSet *_remaningIdentifiers;	// 24 = 0x18
    NSMutableArray *_results;	// 32 = 0x20
}

+ (id)helperExpiredIdentifiers:(id)arg1;	// IMP=0x004000000003a7fc
+ (id)helperForHandler:(CDUnknownBlockType)arg1 identifiers:(id)arg2;	// IMP=0x001000000003a525
- (void).cxx_destruct;	// IMP=0x002000000003ac87
- (void)failAllRemainingRequests;	// IMP=0x001000000003aad9
- (_Bool)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3;	// IMP=0x001000000003a856
- (id)description;	// IMP=0x001000000003a440

@end

