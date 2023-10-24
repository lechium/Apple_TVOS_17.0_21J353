//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADServiceCommandType, NSObject;
@protocol ADAceRequestTransformer, ADAceResponseTransformer, AFSiriRequestHandling, OS_dispatch_queue;

@interface ADSiriTaskService
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADServiceCommandType *_commandType;	// 16 = 0x10
    id <ADAceRequestTransformer> _requestTransformer;	// 24 = 0x18
    id <ADAceResponseTransformer> _responseTransformer;	// 32 = 0x20
    id <AFSiriRequestHandling> _requestHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002130f4
- (id)requestCommandAceType;	// IMP=0x00100000002130df
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000212f5b
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000212e72
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000212d62
- (id)domains;	// IMP=0x0010000000212cce
- (CDUnknownBlockType)_informCommandCenter:(id)arg1 willPerformLaunchApp:(id)arg2;	// IMP=0x0010000000212bd5
- (id)initWithCommandType:(id)arg1 requestTransformer:(id)arg2 responseTransformer:(id)arg3 requestHandler:(id)arg4;	// IMP=0x00000000002129af

@end
