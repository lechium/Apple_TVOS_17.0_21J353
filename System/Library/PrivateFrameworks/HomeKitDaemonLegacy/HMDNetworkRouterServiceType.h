//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterServiceType : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004c1722
- (void).cxx_destruct;	// IMP=0x00000000004c1712
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c154c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c14e2
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c1312
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c1050
- (id)initWithName:(id)arg1;	// IMP=0x00000000004c0fe5
- (id)init;	// IMP=0x00000000004c0fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
