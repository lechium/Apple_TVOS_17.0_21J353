//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebMetricsAction
{
    _Bool _shouldFlush;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000093e73
@property(nonatomic) _Bool shouldFlush; // @synthesize shouldFlush=_shouldFlush;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
- (id)runAction;	// IMP=0x0000000000093b8a
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000093459

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
