//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebOTPAction
{
    _Bool _enabled;	// 8 = 0x8
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)runAction;	// IMP=0x0000000000099f3f
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000099e3e

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

