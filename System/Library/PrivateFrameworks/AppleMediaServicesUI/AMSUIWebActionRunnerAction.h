//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebActionRunnerAction
{
    NSDictionary *_actionPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000606e3
@property(copy, nonatomic) NSDictionary *actionPayload; // @synthesize actionPayload=_actionPayload;
- (id)runAction;	// IMP=0x00000000000603d1
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000060356

@end

