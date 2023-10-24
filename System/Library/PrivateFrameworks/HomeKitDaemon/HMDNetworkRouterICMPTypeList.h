//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterICMPTypeList : NSObject
{
    NSMutableArray *_types;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005741b2
+ (id)typeListFromICMPTypes:(id)arg1;	// IMP=0x00100000004ecbc5
- (void).cxx_destruct;	// IMP=0x000000000057368a
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005734c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000057345a
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000057314e
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000572e3e
- (id)initWithTypes:(id)arg1;	// IMP=0x0000000000572dd3
- (id)init;	// IMP=0x0000000000572da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

