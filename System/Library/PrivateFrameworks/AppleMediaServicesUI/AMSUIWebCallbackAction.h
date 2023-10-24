//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebCallbackAction
{
    NSString *_service;	// 8 = 0x8
    NSDictionary *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006bcd9
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
- (id)runAction;	// IMP=0x000000000006b832
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000006b6ee

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

