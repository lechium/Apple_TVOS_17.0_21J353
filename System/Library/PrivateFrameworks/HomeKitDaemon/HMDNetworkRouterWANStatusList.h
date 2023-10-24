//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterWANStatusList : NSObject
{
    NSMutableArray *_statuses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005879a2
- (void).cxx_destruct;	// IMP=0x0000000000587992
@property(retain, nonatomic) NSMutableArray *statuses; // @synthesize statuses=_statuses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005877cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000587762
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000587456
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000587146
- (id)initWithStatuses:(id)arg1;	// IMP=0x00000000005870db
- (id)init;	// IMP=0x00000000005870ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
