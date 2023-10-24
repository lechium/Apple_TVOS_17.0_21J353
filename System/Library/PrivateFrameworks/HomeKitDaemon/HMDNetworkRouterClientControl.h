//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientControl : NSObject
{
    NSMutableArray *_operations;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005802b0
- (void).cxx_destruct;	// IMP=0x000000000057f788
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000057f5c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000057f558
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000057f24c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000057ef3c
- (id)initWithOperations:(id)arg1;	// IMP=0x000000000057eed1
- (id)init;	// IMP=0x000000000057eea2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
