//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface JEMetricsDataPredicate : NSObject
{
    NSDictionary *_fieldPredicates;	// 8 = 0x8
}

+ (id)predicateWithConfiguration:(id)arg1;	// IMP=0x006000000001bfa4
+ (id)predicateWithType:(id)arg1 argument:(id)arg2;	// IMP=0x006000000001be48
- (void).cxx_destruct;	// IMP=0x000000000001c8ad
- (_Bool)evaluateWithMetricsData:(id)arg1;	// IMP=0x000000000001c4e3
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x000000000001c163
- (id)initWithFormat:(id)arg1;	// IMP=0x000000000001c035

@end
