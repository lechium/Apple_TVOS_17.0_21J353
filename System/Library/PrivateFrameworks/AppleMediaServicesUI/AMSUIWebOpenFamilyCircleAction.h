//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebOpenFamilyCircleAction
{
    NSString *_clientName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000097fba
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (id)runAction;	// IMP=0x0000000000097f01
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000097e2a

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

