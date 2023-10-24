//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterAccessViolationControlOperation : NSObject
{
    long long _operation;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005696aa
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000569552
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000569501
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000005694e7
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000569395
- (id)initWithOperation:(long long)arg1;	// IMP=0x0000000000569358
- (id)init;	// IMP=0x000000000056931c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
