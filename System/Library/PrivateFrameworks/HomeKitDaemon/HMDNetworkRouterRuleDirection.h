//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterRuleDirection : NSObject
{
    long long _direction;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000056b83e
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x00100000004ec0be
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056b6e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056b696
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000056b67c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000056b52a
- (id)initWithDirection:(long long)arg1;	// IMP=0x000000000056b4ed
- (id)init;	// IMP=0x000000000056b4b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

