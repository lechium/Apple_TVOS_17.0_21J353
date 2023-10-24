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

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004be2ea
+ (id)typeListFromICMPTypes:(id)arg1;	// IMP=0x001000000044b68c
- (void).cxx_destruct;	// IMP=0x00000000004bd7c2
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bd5fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bd592
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004bd286
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004bcf76
- (id)initWithTypes:(id)arg1;	// IMP=0x00000000004bcf0b
- (id)init;	// IMP=0x00000000004bcedc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

