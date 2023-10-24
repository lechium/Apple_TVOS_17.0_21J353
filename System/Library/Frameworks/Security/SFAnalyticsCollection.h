//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, SFAnalyticsCollectionAction;

__attribute__((visibility("hidden")))
@interface SFAnalyticsCollection : NSObject
{
    NSMutableDictionary *_matchingRules;	// 8 = 0x8
    CDUnknownBlockType _tearDownMetricsHook;	// 16 = 0x10
    id <SFAnalyticsCollectionAction> _actions;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000048b21
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <SFAnalyticsCollectionAction> actions; // @synthesize actions=_actions;
@property(copy) CDUnknownBlockType tearDownMetricsHook; // @synthesize tearDownMetricsHook=_tearDownMetricsHook;
@property(retain) NSMutableDictionary *matchingRules; // @synthesize matchingRules=_matchingRules;
- (unsigned int)match:(id)arg1 eventClass:(long long)arg2 attributes:(id)arg3 bucket:(unsigned int)arg4 logger:(id)arg5;	// IMP=0x000000000004892a
- (void)storeCollection:(id)arg1 logger:(id)arg2;	// IMP=0x00000000000487a8
- (void)loadCollection:(id)arg1;	// IMP=0x0000000000048689
- (void)stopMetricCollection;	// IMP=0x0000000000048618
- (void)onQueue_stopMetricCollection;	// IMP=0x00000000000484fb
- (void)setupMetricsHook:(id)arg1;	// IMP=0x00000000000483b6
- (id)parseCollection:(id)arg1 logger:(id)arg2;	// IMP=0x000000000004804a
- (void)dealloc;	// IMP=0x000000000004800c
- (id)initWithActionInterface:(id)arg1;	// IMP=0x0000000000047f36
- (id)init;	// IMP=0x0000000000047ef6

@end

