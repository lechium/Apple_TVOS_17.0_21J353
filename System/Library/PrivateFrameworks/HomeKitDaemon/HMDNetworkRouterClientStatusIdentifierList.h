//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusIdentifierList : NSObject
{
    NSMutableArray *_clientStatusIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000585a97
- (void).cxx_destruct;	// IMP=0x0000000000584c93
@property(retain, nonatomic) NSMutableArray *clientStatusIdentifiers; // @synthesize clientStatusIdentifiers=_clientStatusIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000584acd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000584a63
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000584757
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000584447
- (id)initWithClientStatusIdentifiers:(id)arg1;	// IMP=0x00000000005843dc
- (id)init;	// IMP=0x00000000005843ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

