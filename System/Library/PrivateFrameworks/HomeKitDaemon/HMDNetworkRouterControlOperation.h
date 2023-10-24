//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterControlOperation : NSObject
{
    long long _operation;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000056a756
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056a602
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056a5b1
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000056a597
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000056a445
- (id)initWithOperation:(long long)arg1;	// IMP=0x000000000056a408
- (id)init;	// IMP=0x000000000056a3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

