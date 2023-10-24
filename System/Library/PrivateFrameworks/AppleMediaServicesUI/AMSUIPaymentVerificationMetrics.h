//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentVerificationMetrics : NSObject
{
    NSString *_appID;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    NSString *_displayReason;	// 24 = 0x18
}

+ (id)_event;	// IMP=0x0060000000055bd2
+ (id)_metricsInstanceWithBag:(id)arg1;	// IMP=0x0060000000055b7e
- (void).cxx_destruct;	// IMP=0x00000000000560ec
@property(retain, nonatomic) NSString *displayReason; // @synthesize displayReason=_displayReason;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;	// IMP=0x0000000000055e15
- (id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2;	// IMP=0x0000000000055c02
- (void)flushEvents;	// IMP=0x0000000000055afc
- (void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;	// IMP=0x00000000000559ae
- (void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2;	// IMP=0x0000000000055887
- (id)initWithBag:(id)arg1 appID:(id)arg2;	// IMP=0x00000000000557ee

@end

