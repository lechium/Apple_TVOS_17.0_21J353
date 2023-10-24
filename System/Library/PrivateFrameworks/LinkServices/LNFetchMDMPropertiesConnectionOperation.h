//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchMDMPropertiesConnectionOperation
{
    LNAction *_action;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006a8aa
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) LNAction *action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000006a76b
- (void)start;	// IMP=0x000000000006a602
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006a351

@end

