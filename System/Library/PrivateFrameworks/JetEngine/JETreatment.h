//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JEMetricsDataPredicate, JETreatmentAction, NSDictionary;

__attribute__((visibility("hidden")))
@interface JETreatment : NSObject
{
    JEMetricsDataPredicate *_predicate;	// 8 = 0x8
    JETreatmentAction *_eventAction;	// 16 = 0x10
    NSDictionary *_fieldActions;	// 24 = 0x18
}

+ (id)treatmentWithConfiguration:(id)arg1 topic:(id)arg2;	// IMP=0x00600000000262ac
- (void).cxx_destruct;	// IMP=0x0000000000026a84
- (id)performTreatment:(id)arg1;	// IMP=0x00000000000266b7
- (id)initWithConfigDictionary:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000026372

@end

